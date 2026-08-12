// Last updated: 12/08/2026, 10:46:44
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
