// Last updated: 16/10/2026, 19:45:45
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        int sum = 0;

        for (auto x : mpp) {
            if (x.second == 1)            
            sum = sum + x.first;
        }
        return sum;
    }
};