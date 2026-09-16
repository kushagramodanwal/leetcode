// Last updated: 16/09/2026, 11:40:29
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {
                if (i == j)
                    sum += mat[i][j];

                if (i+j ==n-1)
                    sum += mat[i][j];
            }
        }
        if (n % 2 != 0)
            sum = sum - mat[n / 2][n / 2];

        return sum;
    }
};

// optimal way 
// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int sum = 0;

//         for (int i = 0; i < n; i++) {
//             sum += mat[i][i];           // main diagonal
//             sum += mat[i][n - 1 - i];   // secondary diagonal
//         }

//         if (n % 2 != 0) {
//             sum -= mat[n / 2][n / 2];   // remove duplicate center
//         }

//         return sum;
//     }
// };