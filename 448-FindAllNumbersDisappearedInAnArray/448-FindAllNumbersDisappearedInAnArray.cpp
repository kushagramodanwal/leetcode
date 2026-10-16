// Last updated: 16/10/2026, 19:47:11

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;

        for (int x = 1; x <= n; x++) {
            if (st.find(x) == st.end()) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
