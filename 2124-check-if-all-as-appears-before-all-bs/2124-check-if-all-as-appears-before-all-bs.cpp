class Solution {
public:
    bool checkString(string s) {

        int a = -1;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'b') {
                a = i;
                break;
            }
        }

        for (int i = a; i < s.size(); i++) {

            if (s[i] == 'a' && a != -1) {
                return false;
            }
        }
        return true;
    }
};