// Last updated: 12/08/2026, 10:48:37
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) { mpp[nums[i]]++; }
        int ans = 0;
        for (auto it : mpp) {
            if (it.second >= (n / 2 + 1))
                ans = it.first;
        }
        return ans;
    }
};