// Last updated: 16/09/2026, 11:40:08
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> temp = nums;  
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            temp.push_back(nums[i]);   
        }

        return temp;
    }
};
