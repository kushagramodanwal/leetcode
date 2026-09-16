// Last updated: 16/09/2026, 11:38:33
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        int summ = sum;
        int count = 0;
        for (int i = 0; i < summ; i++) {
            if (sum % k == 0)
                break;
            else {
                sum--;
                count++;
                }              
        }
        return count;
    }
};