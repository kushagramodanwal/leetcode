class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        unordered_map<int, int> q;
        long long sum = 0;
        long long maxi = 0;

        while (j < n) {
            q[nums[j]]++;
            sum += nums[j];

            if (j - i + 1 < k) {
                j++;
            } 
            else {
                if (q.size() == k) {
                    maxi = max(maxi, sum);
                }

                sum -= nums[i];
                q[nums[i]]--;

                if (q[nums[i]] == 0) {
                    q.erase(nums[i]);
                }

                i++;
                j++;
            }
        }

        return maxi;
    }
};
