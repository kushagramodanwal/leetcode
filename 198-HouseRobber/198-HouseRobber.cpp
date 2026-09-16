// Last updated: 16/09/2026, 11:42:18
class Solution {
public:
    int solve(vector<int>& nums, int n, int i, int free,
              vector < vector<int> > & dp) {

        if (i == n)
            return 0;

        if (dp[i][free] != -1)
            return dp[i][free];

        if (free == 0)
            return dp[i][free] = solve(nums, n, i + 1, 1, dp);

        int yes = nums[i] + solve(nums, n, i + 1, 0, dp);

        int no = solve(nums, n, i + 1, 1, dp);

        return dp[i][free] = max(yes, no);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int free = 1;
        vector<vector<int>> dp;

        for (int i = 0; i < n; i++) {
            vector<int> t(2, -1);
            dp.push_back(t);
        }
        return solve(nums, n, i, free, dp);
    }
};

// 1d dp se bhi kr skte hai without free because hamne forward approach use kiua hai we can also go for backward ap
