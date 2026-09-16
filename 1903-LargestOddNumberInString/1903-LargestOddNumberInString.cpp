// Last updated: 16/09/2026, 11:40:11
class Solution {
public:
    string largestOddNumber(string num) {

        for (int i = num.size()-1; i >= 0; i--) {
                if ((num[i] - '0') % 2 == 1) {
                    return num.substr(0, i + 1);
                }
            }
        return "";
    }
};