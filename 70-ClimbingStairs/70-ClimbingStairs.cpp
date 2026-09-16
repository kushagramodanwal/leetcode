// Last updated: 16/09/2026, 11:43:09
class Solution {
public:

    unordered_map<int, int> dp;

    int climbStairs(int n) {

        if (n == 0 || n == 1)
            return 1;

        if (dp.find(n) != dp.end())
            return dp[n];

        int a1 = climbStairs(n - 1);
        int a2 = climbStairs(n - 2);

        dp[n] = a1 + a2;

        return dp[n];
    }
};