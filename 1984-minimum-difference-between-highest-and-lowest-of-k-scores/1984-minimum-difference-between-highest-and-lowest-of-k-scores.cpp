class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i = 0, j = 0;
        int n = nums.size();
        int ws = k;
        int mini = INT_MAX;
        int diff  =0 ;
        while (j < n) {
            if (j - i + 1 < ws) {
                j++;
            }
            else if (j - i + 1 == ws) {
                diff = nums[j]-nums[i];
                mini = min(mini, diff);
                i++;
                j++;
            }
        }

        return mini;
    }
};