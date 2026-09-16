// Last updated: 16/09/2026, 11:39:30
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                count++;
            else if (nums[i] < 0)
                count1++;
        }

        int maxx = max(count, count1);
        return maxx;
    }
};