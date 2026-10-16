// Last updated: 16/10/2026, 19:47:54
class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for (char c : s) {
            c = tolower(c);
            if (isalnum(c)) {
                ans += c;
            }
        }
            

        cout << ans;

        int i = 0, j = ans.size() - 1;

        while (i < j) {
            if (ans[i] != ans[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};