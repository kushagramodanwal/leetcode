// Last updated: 16/09/2026, 11:41:59
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;

        for (char c : s)
            mpp[c]++;

        for (char c : t)
            mpp[c]--;

        for (auto c : mpp) {
            if (c.second == -1)
                return c.first;
        }

        return ' ';
    }
};