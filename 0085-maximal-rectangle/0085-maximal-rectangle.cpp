class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        stack<pair<int, int>> st;
        vector<int> pse(n);
        vector<int> nse(n);

        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                pse[i] = -1;
            }
            else if (st.top().first < heights[i]) {
                pse[i] = st.top().second;
            }
            else {
                while (!st.empty() &&
                       st.top().first >= heights[i]) {
                    st.pop();
                }

                if (st.empty()) {
                    pse[i] = -1;
                }
                else {
                    pse[i] = st.top().second;
                }
            }

            st.push({heights[i], i});
        }

        while (!st.empty()) {
            st.pop();
        }

        for (int i = n - 1; i >= 0; i--) {
            if (st.empty()) {
                nse[i] = n;
            }
            else if (st.top().first < heights[i]) {
                nse[i] = st.top().second;
            }
            else {
                while (!st.empty() &&
                       st.top().first >= heights[i]) {
                    st.pop();
                }

                if (st.empty()) {
                    nse[i] = n;
                }
                else {
                    nse[i] = st.top().second;
                }
            }

            st.push({heights[i], i});
        }

        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;
            maxi = max(maxi, area);
        }

        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) {
            return 0;
        }

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> heights(m, 0);
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                }
                else {
                    heights[j] = 0;
                }
            }

            maxi = max(maxi, largestRectangleArea(heights));
        }

        return maxi;
    }
};