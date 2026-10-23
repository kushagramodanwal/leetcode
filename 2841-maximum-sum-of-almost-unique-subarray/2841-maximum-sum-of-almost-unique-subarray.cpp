
class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {

        int i = 0;
        int j = 0;
        int n = nums.size();
        int ws = k;
        unordered_map<int, int> st;
        long long sum = 0;
        long long maxi = 0;

        while (j < n) {

            st[nums[j]]++;
            sum += nums[j];

            if (j - i + 1 < ws)
                j++;
            else if (j - i + 1 == ws) {

                if (st.size() >= m) {
                    maxi = max(maxi, sum);
                }

                sum -= nums[i];

                st[nums[i]]--;
                if (st[nums[i]] == 0)
                    st.erase(nums[i]);

                i++;
                j++;
            }
        }

        return maxi;
    }
};
