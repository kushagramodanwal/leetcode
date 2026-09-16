// Last updated: 16/09/2026, 11:40:01
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        bool flag = false;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i < j && nums[i] < nums[j]) {
                    ans = max(ans, nums[j] - nums[i]);
                    flag = true;
                }
            }
        }

        if (flag == true)
            return ans;
        else
            return -1;
    }
};