// Last updated: 16/09/2026, 11:39:57
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int spaces = 0;

            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ')
                    spaces++;
            }

            int words = spaces + 1;   
            maxi = max(maxi, words);
        }

        return maxi;
    }
};
