class Solution {
public:
    int fun(vector<int>& a, int n, int i, int k, vector<vector<int>>& dp,int fee) {

        if (i == n)
            return 0;
        // k == transactions isme unlimited hai 
        // if (k == 0)
            // return 0;

        // k = 1 hai to buy state
        // k = 0 sell state
        if (dp[i][k] != -1)
            return dp[i][k];
        // buy
        if (k == 1) {
            int c1 = fun(a, n, i + 1, 0, dp,fee) - a[i]; // khreeda
            int c2 = fun(a, n, i + 1, 1, dp,fee);            // nhi khreeda
            return dp[i][k] = max(c1, c2);
        } else // sell
        {
            int c1 = fun(a, n, i + 1, 1, dp,fee) + a[i]-fee;
            int c2 = fun(a, n, i + 1, 0, dp,fee);
            return dp[i][k] = max(c1, c2);
        }
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int k =1; //intitally buy kr skte hai
                vector<vector<int>> dp(n, vector<int>(k + 1, -1));

        int gain = fun(prices, n, 0, k, dp,fee);

        return gain;
    }
};