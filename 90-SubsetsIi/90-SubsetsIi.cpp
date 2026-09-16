// Last updated: 16/09/2026, 11:43:01
class Solution {
public:
    set<vector<int>> st;

    void solve(vector<vector<int>> op, vector<int> nums) {

        if (nums.size() == 0) {
            for (auto x : op) {
                st.insert(x);
            }
            return;
        }

        vector<vector<int>> op1 = op;
        vector<vector<int>> op2 = op;

        // include current element
        for (auto& x : op2) {
            x.push_back(nums[0]);
        }

        // remove current element
        nums.erase(nums.begin());

        solve(op1, nums);
        solve(op2, nums);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> op;
        op.push_back({});

        solve(op, nums);

        return vector<vector<int>>(st.begin(), st.end());
    }
};