class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int i = 0;
        int j = 0;

        int n = s2.size();
        int k = s1.size();
        unordered_map<int, int> t;

        for (int i = 0; i < s1.size(); i++) {
            t[s1[i]]++;
        }

        unordered_map<int, int> mpp;
        while (j < n) {

            mpp[s2[j]]++;

            if (j - i + 1 < k)
                j++;
            else if (j - i + 1 == k) {
                if (mpp == t) {
                    return true;
                }
                mpp[s2[i]]--;
                if (mpp[s2[i]] == 0) {
                    mpp.erase(s2[i]);
                }

                i++;
                j++;
            }
        }
        return false;
    }
};
