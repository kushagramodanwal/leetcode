
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        // Previous Smaller Element
        stack<pair<int, int>> st;
        vector<int> pse(n);

        for (int i = 0; i < n; i++) {

            if (st.empty()) {
                pse[i] = -1;
            }

            else if (st.top().first < nums[i]) {
                pse[i] = st.top().second;
            }

            else {
                while (st.size() > 0 && st.top().first >= nums[i]) {
                    st.pop();
                }

                if (st.size() == 0) {
                    pse[i] = -1;
                }
                else {
                    pse[i] = st.top().second;
                }
            }

            st.push({nums[i], i});
        }

        // Next Smaller or Equal Element
        stack<pair<int, int>> st1;
        vector<int> nse(n);

        for (int i = n - 1; i >= 0; i--) {

            if (st1.empty()) {
                nse[i] = n;
            }

            else if (st1.top().first <= nums[i]) {
                nse[i] = st1.top().second;
            }

            else {
                while (st1.size() > 0 && st1.top().first > nums[i]) {
                    st1.pop();
                }

                if (st1.size() == 0) {
                    nse[i] = n;
                }
                else {
                    nse[i] = st1.top().second;
                }
            }

            st1.push({nums[i], i});
        }

        // Sum of Subarray Minimums
        long long mini = 0;

        for (int i = 0; i < n; i++) {

            long long left = i - pse[i];
            long long right = nse[i] - i;

            mini += 1LL * left * right * nums[i];
        }

        // Previous Greater Element
        stack<pair<int, int>> st2;
        vector<int> pge(n);

        for (int i = 0; i < n; i++) {

            if (st2.empty()) {
                pge[i] = -1;
            }

            else if (st2.top().first > nums[i]) {
                pge[i] = st2.top().second;
            }

            else {
                while (st2.size() > 0 && st2.top().first <= nums[i]) {
                    st2.pop();
                }

                if (st2.size() == 0) {
                    pge[i] = -1;
                }
                else {
                    pge[i] = st2.top().second;
                }
            }

            st2.push({nums[i], i});
        }

        // Next Greater or Equal Element
        stack<pair<int, int>> st3;
        vector<int> nge(n);

        for (int i = n - 1; i >= 0; i--) {

            if (st3.empty()) {
                nge[i] = n;
            }

            else if (st3.top().first >= nums[i]) {
                nge[i] = st3.top().second;
            }

            else {
                while (st3.size() > 0 && st3.top().first < nums[i]) {
                    st3.pop();
                }

                if (st3.size() == 0) {
                    nge[i] = n;
                }
                else {
                    nge[i] = st3.top().second;
                }
            }

            st3.push({nums[i], i});
        }

        // Sum of Subarray Maximums
        long long maxi = 0;

        for (int i = 0; i < n; i++) {

            long long left = i - pge[i];
            long long right = nge[i] - i;

            maxi += 1LL * left * right * nums[i];
        }

        return maxi - mini;
    }
};
