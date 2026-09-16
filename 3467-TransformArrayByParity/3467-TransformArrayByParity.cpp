// Last updated: 16/09/2026, 11:38:38
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                nums[i] = 0;
            }

            else if (nums[i] % 2 != 0) {
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());

        return nums;
    }
};