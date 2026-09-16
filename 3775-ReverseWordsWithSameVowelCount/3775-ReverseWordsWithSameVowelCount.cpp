// Last updated: 16/09/2026, 11:38:17
class Solution {
public:
    string reverseWords(string s) {
        string p = s;

        stringstream ss(s);
        string word, ans = "";
        int flag = -1;

        while (ss >> word) {
            int cnt = 0;

            for (int i = 0; i < word.size(); i++) {
                char c = word[i];
                if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                    cnt++;
            }

            if (flag == -1) {
                flag = cnt;
            } else {
                if (cnt == flag)
                    reverse(word.begin(), word.end());
            }

            if (!ans.empty()) ans += " ";
            ans += word;
        }

        return ans;
    }
};
