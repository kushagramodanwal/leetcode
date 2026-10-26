class Solution {
public:
    vector<vector<int>> dp;

    bool isPali(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    int solve(string &s, int i, int j) {
        if (i >= j || isPali(s, i, j))
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;

        for (int k = i; k < j; k++) {
            if (isPali(s, i, k)) {
                int temp = 1 + solve(s, k + 1, j);
                ans = min(ans, temp);
            }
        }

        return dp[i][j] = ans;
    }

    int minCut(string s) {
        int n = s.size();
        dp.assign(n, vector<int>(n, -1));

        return solve(s, 0, n - 1);
    }
};