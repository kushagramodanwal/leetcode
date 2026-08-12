// Last updated: 12/08/2026, 10:49:06
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        double ans;

        sort(nums1.begin(), nums1.end());

        if (nums1.size() % 2 != 0) 
            ans = nums1[nums1.size() / 2];
        else 
            ans = (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2) - 1]) / 2.0;

        return ans;
    }
};