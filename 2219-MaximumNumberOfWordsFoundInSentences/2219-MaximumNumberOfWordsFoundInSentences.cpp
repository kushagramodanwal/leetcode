// Last updated: 12/08/2026, 10:46:33
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
