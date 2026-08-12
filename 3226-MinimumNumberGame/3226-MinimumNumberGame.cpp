// Last updated: 12/08/2026, 10:45:39
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
