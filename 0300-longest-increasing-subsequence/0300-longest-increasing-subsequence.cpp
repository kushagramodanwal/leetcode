class Solution {
public:
    int dp[2501][2501];

    int solve(vector<int>& nums, int i, int prev) {
        if (i == nums.size())
            return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        int notTake = solve(nums, i + 1, prev);

        int take = 0;

        if (prev == -1 || nums[i] > nums[prev]) {
            take = 1 + solve(nums, i + 1, i);
        }

        return dp[i][prev + 1] = max(take, notTake);
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0, -1);
    }
};