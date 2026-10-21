class Solution {
public:
    int solve(int i, int j1, int j2,
              vector<vector<int>>& grid,
              vector<vector<vector<int>>>& dp) {

        int rows = grid.size();
        int cols = grid[0].size();

        if (j1 < 0 || j1 >= cols || j2 < 0 || j2 >= cols)
            return -1e9;

        if (i == rows - 1) {
            if (j1 == j2)
                return grid[i][j1];

            return grid[i][j1] + grid[i][j2];
        }

        if (dp[i][j1][j2] != -1)
            return dp[i][j1][j2];

        int cherries = grid[i][j1];

        if (j1 != j2)
            cherries += grid[i][j2];

        int maxi = -1e9;

        for (int d1 = -1; d1 <= 1; d1++) {
            for (int d2 = -1; d2 <= 1; d2++) {
                int next = solve(i + 1, j1 + d1, j2 + d2,
                                 grid, dp);

                maxi = max(maxi, cherries + next);
            }
        }

        return dp[i][j1][j2] = maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<vector<int>>> dp(
            rows, vector<vector<int>>(
                cols, vector<int>(cols, -1)
            )
        );

        return solve(0, 0, cols - 1, grid, dp);
    }
};