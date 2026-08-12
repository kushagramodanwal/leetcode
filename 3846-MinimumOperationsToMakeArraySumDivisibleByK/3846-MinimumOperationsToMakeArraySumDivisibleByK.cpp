// Last updated: 12/08/2026, 10:45:22
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