// Last updated: 12/08/2026, 10:46:40
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