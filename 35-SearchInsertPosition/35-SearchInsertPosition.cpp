// Last updated: 16/09/2026, 11:43:16
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = start - (start - end) / 2;

            if (nums[mid] == target) {

                return mid;

            }

            else if (nums[mid] > target)

            {
                end = mid - 1;

            }

            else if (nums[mid] < target) {
                start = mid + 1;
            }
        }

        return start;
    }
};