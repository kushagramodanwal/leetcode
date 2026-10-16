// Last updated: 16/10/2026, 19:44:24
class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);

        if (s[0] - '0' == x)
            return false;

        for (char c : s) {
            if (c - '0' == x)
                return true;
        }

        return false;
    }
};