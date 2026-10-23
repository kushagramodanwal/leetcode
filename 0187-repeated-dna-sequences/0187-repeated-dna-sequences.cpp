
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        int i = 0;
        int j = 0;

        int n = s.size();
        int k = 10;

        string p;
        vector<string> v;

        while (j < n) {

            p.push_back(s[j]);

            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {

                v.push_back(p);

                p.erase(0, 1);

                i++;
                j++;
            }
        }

        vector<string> ans;
        unordered_map<string, int> mpp;

        for (int i = 0; i < v.size(); i++) {
            mpp[v[i]]++;
        }

        for (auto x : mpp) {
            if (x.second >= 2) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};
