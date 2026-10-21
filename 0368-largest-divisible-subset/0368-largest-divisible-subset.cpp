class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1);
        vector<int> parent(n);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        int ans = 1;
        int lastIndex = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (nums[j] % nums[i] == 0 &&
                    dp[i] < 1 + dp[j]) {

                    dp[i] = 1 + dp[j];
                    parent[i] = j;
                }
            }

            if (dp[i] > ans) {
                ans = dp[i];
                lastIndex = i;
            }
        }

        vector<int> result;

        while (parent[lastIndex] != lastIndex) {
            result.push_back(nums[lastIndex]);
            lastIndex = parent[lastIndex];
        }

        result.push_back(nums[lastIndex]);
        return result;
    }
};