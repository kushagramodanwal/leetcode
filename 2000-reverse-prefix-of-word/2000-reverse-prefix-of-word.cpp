class Solution {
public:
    string reversePrefix(string word, char ch) {

        int n = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                n = i;
                break;
            }
        }

        reverse(word.begin(), word.begin() + n + 1);

        return word;
    }
};