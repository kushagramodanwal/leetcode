// Last updated: 16/09/2026, 11:39:41
class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                v.push_back(nums[i]);
            }
        }

        if (v.empty()) return 0;  

        int sum = accumulate(v.begin(), v.end(), 0);
        int avg = sum / v.size();
        return avg;
    }
};
