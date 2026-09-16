// Last updated: 16/09/2026, 11:38:59
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());  

        vector<int> arr;

        for (int i = 0; i < nums.size(); i += 2) { 
            arr.push_back(nums[i + 1]);  
            arr.push_back(nums[i]);      
        }

        return arr;
    }
};
