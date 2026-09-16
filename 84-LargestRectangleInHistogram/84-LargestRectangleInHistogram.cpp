// Last updated: 16/09/2026, 11:43:04
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int, int>> st;
        vector<int> v;
        int n = heights.size();

        // NSL
        for (int i = 0; i < n; i++) {

            if (st.empty())
                v.push_back(-1);

            else if (st.size() > 0 && st.top().first < heights[i]) {

                v.push_back(st.top().second);
            }

            else if (st.size() > 0 && st.top().first >= heights[i]) {
                while (st.size() > 0 && st.top().first >= heights[i])
                    st.pop();
                if (st.size() > 0 && st.top().first < heights[i])
                    v.push_back(st.top().second);

                else
                    v.push_back(-1);
            }
            st.push({heights[i], i});
        }

        stack<pair<int, int>> st1;
        vector<int> v1;

        // NSR
        for (int i = n - 1; i >= 0; i--) {

            if (st1.empty())
                v1.push_back(n);

            else if (st1.size() > 0 && st1.top().first < heights[i]) {

                v1.push_back(st1.top().second);
            }

            else if (st1.size() > 0 && st1.top().first >= heights[i]) {
                while (st1.size() > 0 && st1.top().first >= heights[i])
                    st1.pop();
                if (st1.size() > 0 && st1.top().first < heights[i])
                    v1.push_back(st1.top().second);

                else
                    v1.push_back(n);
            }
            st1.push({heights[i], i});
        }
        reverse(v1.begin(), v1.end());
        vector<int> area(n);

        for (int i = 0; i < n; i++) {
            area[i] = (v1[i] - v[i] - 1) * heights[i];
        }
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, area[i]);
        }

        return maxArea;
    }
};