// Last updated: 12/08/2026, 10:45:28
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for (int x : nums) {
            if (x % 3 != 0) {
                count++;
            }
        }
        return count;
    }
};
