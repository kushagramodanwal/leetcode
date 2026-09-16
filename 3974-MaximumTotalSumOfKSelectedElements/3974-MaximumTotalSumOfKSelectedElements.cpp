// Last updated: 16/09/2026, 11:38:21
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int i = 1;
        while (i <= k) {
            if (mul > 0) {
                sum += 1LL * nums[n - 1] * mul;
            } else {
                sum += nums[n - 1];
            }
            mul--;
            n--;
            i++;
        }
        return sum;
    }
};