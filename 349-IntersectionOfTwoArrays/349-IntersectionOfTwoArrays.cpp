// Last updated: 12/08/2026, 10:48:11
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        vector<int> ans;

        for (int x : nums1) s1.insert(x);
        for (int x : nums2) s2.insert(x);

        for (int x : s1) {
            if (s2.count(x)) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
