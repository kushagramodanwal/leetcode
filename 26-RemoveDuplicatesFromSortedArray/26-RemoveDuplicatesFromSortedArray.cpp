// Last updated: 16/10/2026, 19:48:38
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
};