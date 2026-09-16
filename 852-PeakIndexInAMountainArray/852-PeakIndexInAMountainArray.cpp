// Last updated: 16/09/2026, 11:41:22
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int lo = 0;
        int hi = arr.size() - 1;
        int ans = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (arr[mid] < arr[mid + 1]) {
                lo = mid + 1;
            } else {
                ans = mid;
                hi = mid - 1;
            }
        }
        return ans;
    }
};