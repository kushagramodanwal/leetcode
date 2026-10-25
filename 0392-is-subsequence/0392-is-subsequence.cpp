class Solution {
public:
    int fun(string& s, string& t, int i, int j,
            vector<vector<int>>& dp) {

        if (i == 0 || j == 0)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i - 1] == t[j - 1])
            return dp[i][j] = 1 + fun(s, t, i - 1, j - 1, dp);

        else
            return dp[i][j] = max(
                fun(s, t, i, j - 1, dp),
                fun(s, t, i - 1, j, dp)
            );
    }

    bool isSubsequence(string s, string t) {
        int i = s.size();
        int j = t.size();

        vector<vector<int>> dp(i + 1, vector<int>(j + 1, -1));

        int lcs = fun(s, t, i, j, dp);

        return lcs == s.size();
    }
};