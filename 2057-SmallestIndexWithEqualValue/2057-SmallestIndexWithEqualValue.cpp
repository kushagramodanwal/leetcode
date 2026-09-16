// Last updated: 16/09/2026, 11:39:58
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