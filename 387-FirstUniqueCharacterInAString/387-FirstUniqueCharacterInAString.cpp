// Last updated: 12/08/2026, 10:48:04
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();

        for (int i = 0; i < n; i++) {  
            bool unique = true;

            for (int j = 0; j < n; j++) { 
                if (i != j && s[i] == s[j]) {
                    unique = false;
                    break;
                }
            }

            if (unique) {
                return i;   
            }
        }

        return -1;  
    }
};
