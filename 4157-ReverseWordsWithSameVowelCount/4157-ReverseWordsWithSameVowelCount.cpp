// Last updated: 12/08/2026, 10:45:11
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
