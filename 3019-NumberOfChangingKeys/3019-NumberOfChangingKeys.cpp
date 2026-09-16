// Last updated: 16/09/2026, 11:38:52
class Solution {
public:
    int countKeyChanges(string s) {
        int cnt = 0;

        for (int i = 1; i < s.size(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                cnt++;
            }
        }

        return cnt;
    }
};
