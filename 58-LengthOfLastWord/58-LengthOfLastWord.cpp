// Last updated: 16/10/2026, 19:48:22

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
