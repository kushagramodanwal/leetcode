// Last updated: 16/10/2026, 19:45:51
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> res(n, false);
        for(int i = 0; i < n; i++) {
            vector<int> v;
            for(int j = l[i]; j <= r[i]; j++) {
                v.push_back(nums[j]);
            }
            sort(v.begin(), v.end());
            int c = v[1] - v[0];
            bool a = true;
            for(int j = 1; j < v.size(); j++) {
                if(v[j] - v[j-1] != c) {
                    a = false;
                    break;
                }
            }
            res[i] = a;
        }
        return res;
    }
};