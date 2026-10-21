class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid,
              vector<vector<int>>& t) {
        int m = grid.size();
        int n = grid[0].size();

        if (i >= m || j >= n)
            return 0;

        if (grid[i][j] == 1)
            return 0;

        if (i == m - 1 && j == n - 1)
            return 1;

        if (t[i][j] != -1)
            return t[i][j];

        int right = solve(i, j + 1, grid, t);
        int down = solve(i + 1, j, grid, t);

        return t[i][j] = right + down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> t(m, vector<int>(n, -1));

        return solve(0, 0, obstacleGrid, t);
    }
};