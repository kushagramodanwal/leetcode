// Last updated: 16/09/2026, 11:43:21
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int lo = 0;
        int hi = nums.size() - 1;
        int n = nums.size();

        while (lo <= hi) {
            int mid = lo + ((hi - lo) / 2);
            // ye wala p1 wala hissa hai
            if (nums[mid] > nums[n - 1]) {
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] < target)
                    lo = mid + 1;
                else {
                    if (nums[0] > target)
                        lo = mid + 1;
                    else
                        hi = mid - 1;
                }

            }
            // ye wala p2 wala hissa hai
            else {

                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    hi = mid - 1;
                else {
                    if (nums[n - 1] >= target)
                        lo = mid + 1;
                    else
                        hi = mid - 1;
                }
            }
        }
        return -1;
    }
};