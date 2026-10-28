
class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int n = s.size();

        unordered_map<char, int> mpp;
        int maxi = 0;
        int maxFreq = 0;

        for (int j = 0; j < n; j++) {
            mpp[s[j]]++;
            maxFreq = max(maxFreq, mpp[s[j]]);

            while ((j - i + 1) - maxFreq > k) {
                mpp[s[i]]--;
                i++;
            }

            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
