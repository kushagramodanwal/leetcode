// Last updated: 16/09/2026, 11:40:43
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> v;

            for (int i = 0; i < n; i++) {
            v.push_back(nums[i]);
            for (int j = n + i; j < 2*n; j++) {
               v.push_back(nums[j]);
                break;
            }
        }
        return v;
    }
};