// Last updated: 16/09/2026, 11:39:13
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> special;   

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                special.push_back(nums[i - 1]); 
            }
        }

        int sum = 0;
        for (int x : special) {
            sum += x * x;
        }

        return sum;
    }
};
