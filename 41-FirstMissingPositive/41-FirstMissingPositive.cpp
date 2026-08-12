// Last updated: 12/08/2026, 10:48:57
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mex = 1;
        for (int i = 0; i < nums.size(); i++) 
            if (mex == nums[i]) mex++;
        return mex;
    }
};