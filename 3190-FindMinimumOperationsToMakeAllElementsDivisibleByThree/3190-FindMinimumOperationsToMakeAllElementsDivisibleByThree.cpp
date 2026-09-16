// Last updated: 16/09/2026, 11:38:47
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
