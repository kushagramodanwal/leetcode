// Last updated: 16/09/2026, 11:39:54
class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            string rev = s;

            reverse(rev.begin(), rev.end());

            if (s == rev)
                return s;
        }

        return "";
    }
};
