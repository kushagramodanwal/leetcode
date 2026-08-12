// Last updated: 12/08/2026, 10:48:21
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(j!=nums[i]) return i;
            j++;
        }
        return j;
    }
};