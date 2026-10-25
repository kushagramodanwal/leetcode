
class Solution {
public:
    int fun(vector<int>& a, int n, int i, int k,
            vector<vector<int>>& dp) {

        if (i >= n)
            return 0;

        // k == 0  sell state hai

        if (dp[i][k] != -1)
            return dp[i][k];

        // BUY
        if (k == 1) {
            int c1 = fun(a, n, i + 1, 0, dp) - a[i]; // buy
            int c2 = fun(a, n, i + 1, 1, dp);        // skip

            return dp[i][k] = max(c1, c2);
        }
        else {
            // k == 0 SELL

            // i + 2, kyunki cooldown ek din ka hai
            // Sell ke baad k = 1 (next buy state)
            int c1 = fun(a, n, i + 2, 1, dp) + a[i]; // sell

            int c2 = fun(a, n, i + 1, 0, dp);        // skip

            return dp[i][k] = max(c1, c2);
        }
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int k =2 ;

        vector<vector<int>> dp(n, vector<int>(k+1, -1));

        return fun(prices, n, 0, 1, dp);
    }
};
