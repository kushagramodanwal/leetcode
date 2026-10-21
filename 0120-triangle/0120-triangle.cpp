class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<vector<int>> t(n, vector<int>(n, 0));

        // Base case: last row
        for (int j = 0; j < n; j++) {
            t[n - 1][j] = triangle[n - 1][j];
        }

        // Bottom-up DP
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                int down = t[i + 1][j];
                int diagonal = t[i + 1][j + 1];

                t[i][j] = triangle[i][j] + min(down, diagonal);
            }
        }

        return t[0][0];
    }
};