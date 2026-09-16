// Last updated: 16/09/2026, 11:41:14
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int n = arr.size();

        stack<pair<int, int>> st;
        vector<int> psee(n);

        // Previous Smaller Element
        for (int i = 0; i < n; i++) {

            if (st.empty()) {
                psee[i] = -1;
            }

            else if (st.top().first < arr[i]) {
                psee[i] = st.top().second;
            }

            else {

                while (st.size() > 0 && st.top().first >= arr[i]) {
                    st.pop();
                }

                if (st.size() == 0) {
                    psee[i] = -1;
                }

                else {
                    psee[i] = st.top().second;
                }
            }

            st.push({arr[i], i});
        }

        stack<pair<int, int>> st1;
        vector<int> nse(n);

        // Next Smaller or Equal Element
        for (int i = n - 1; i >= 0; i--) {

            if (st1.empty()) {
                nse[i] = n;
            }

            else if (st1.top().first <= arr[i]) {
                nse[i] = st1.top().second;
            }

            else {

                while (st1.size() > 0 && st1.top().first > arr[i]) {
                    st1.pop();
                }

                if (st1.size() == 0) {
                    nse[i] = n;
                }

                else {
                    nse[i] = st1.top().second;
                }
            }

            st1.push({arr[i], i});
        }

        long long total = 0;
        long long mod = 1000000007;

        for (int i = 0; i < n; i++) {

            long long left = i - psee[i];
            long long right = nse[i] - i;

            total = (total + (left * right * arr[i]) % mod) % mod;
        }

        return total;
    }
};