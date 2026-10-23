class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0;
        int j = 0;

        int n = s.size();
        int k = p.size();
        vector<int> ans;
        unordered_map<int, int> t;

        for (int i = 0; i < p.size(); i++) {
            t[p[i]]++;
        }

        unordered_map<int, int> mpp;
        while (j < n) {

            mpp[s[j]]++;
            if (mpp == t) {
                ans.push_back(i);
            } 
            if (j - i + 1 < k)
                j++;
            else if (j - i + 1 == k) {

                mpp[s[i]]--;
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]);
                }

                i++;
                j++;
            }
        }
        return ans;
    }
};