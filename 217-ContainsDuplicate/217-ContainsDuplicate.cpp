// Last updated: 12/08/2026, 10:48:32
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                flag = true;
                break;
            }
        }

        if(flag == true) return true;
        else return false;
    }
};