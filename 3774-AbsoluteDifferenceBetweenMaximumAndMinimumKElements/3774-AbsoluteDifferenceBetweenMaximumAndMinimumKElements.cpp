// Last updated: 16/09/2026, 11:38:20
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int s = 0, l = 0;
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            s += nums[i];
            l += nums[n - 1 - i];
        }

        return abs(l - s);
    }
};
