// Last updated: 12/08/2026, 10:46:31
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
