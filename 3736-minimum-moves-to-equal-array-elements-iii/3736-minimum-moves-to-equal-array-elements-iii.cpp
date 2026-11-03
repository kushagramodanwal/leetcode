class Solution {
public:
    int minMoves(vector<int>& nums) {

        int maxi = 0;

        for (int i = 0; i < nums.size(); i++) {

            maxi = max(maxi, nums[i]);
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {

            while (nums[i] != maxi) {
                nums[i]++;
                cnt++;
            }
        }
        return cnt;
    }
};