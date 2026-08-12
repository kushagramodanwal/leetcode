// Last updated: 12/08/2026, 10:46:37
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        bool flag = false;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            ans = 0;
            if (i % 10 == nums[i]) {
                ans = i;
                flag = true;
                break;
            }
        }
        if (flag == true) return ans;
        else return -1;
    }
};