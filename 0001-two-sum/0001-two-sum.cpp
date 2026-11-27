class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = 1;
        while (i < n) {
            j = i + 1;
            while (j < n) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
                else {
                    j++;
                }
            }
            i++;
        }
        return {};
    }
};