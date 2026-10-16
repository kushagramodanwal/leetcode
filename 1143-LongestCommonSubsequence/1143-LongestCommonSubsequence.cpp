// Last updated: 16/10/2026, 19:46:17
class Solution {
public:
    inline static int t[1001][1001];
    int lcs(string& text1, string& text2, int n, int m) {

        for (int i = 0; i <= n; i++) {
            t[i][0] = 0;
        }

        for (int j = 0; j <= m; j++) {
            t[0][j] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    t[i][j] = 1 + t[i - 1][j - 1];
                } else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
        return t[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();
        int ans = lcs(text1, text2, n, m);
        return ans;
    }
};