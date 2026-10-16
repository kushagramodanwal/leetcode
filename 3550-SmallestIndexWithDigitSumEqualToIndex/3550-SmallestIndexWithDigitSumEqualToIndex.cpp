// Last updated: 16/10/2026, 19:44:40
class Solution {
public:
    int digit(int a) {
        int sum = 0;
        while (a > 0) {
            int d = a % 10;
            sum += d;
            a /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (digit(nums[i]) == i) {
                mini = min(mini, i);
            }
        }
        if (mini == INT_MAX) return -1;
        return mini;
    }
};