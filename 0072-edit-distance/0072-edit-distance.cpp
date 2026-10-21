class Solution {
public:
    int solve(string& a, string& b, int m, int n,
              vector<vector<int>>& dp) {
        if (m == 0) return n;
        if (n == 0) return m;

        if (dp[m][n] != -1)
            return dp[m][n];

        if (a[m - 1] == b[n - 1]) {
            return dp[m][n] =
                solve(a, b, m - 1, n - 1, dp);
        }

        int insertOp = solve(a, b, m, n - 1, dp);
        int deleteOp = solve(a, b, m - 1, n, dp);
        int replaceOp = solve(a, b, m - 1, n - 1, dp);

        return dp[m][n] = 1 + min({
            insertOp, deleteOp, replaceOp
        });
    }

    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();

        vector<vector<int>> dp(
            m + 1, vector<int>(n + 1, -1)
        );

        return solve(word1, word2, m, n, dp);
    }
};