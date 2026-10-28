
class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0;
        int n = s.size();
        unordered_map<char, int> mpp;
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            mpp[s[j]]++;

            while (mpp.size() == 3) {
                cnt += n - j;

                mpp[s[i]]--;
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]);
                }
                i++;
            }
        }

        return cnt;
    }
};
