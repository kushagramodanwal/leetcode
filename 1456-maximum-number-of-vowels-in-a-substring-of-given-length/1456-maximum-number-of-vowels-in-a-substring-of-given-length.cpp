class Solution {
public:
    int maxVowels(string s, int k) {

        int i = 0;
        int j = 0;
        int n = s.size();
        int vowel = 0;
        int maxi = INT_MIN;
        while (j < n) {

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                vowel++;
            }

            if (j - i + 1 < k)
                j++;
            else if (j - i + 1 == k) {
                maxi = max(maxi, vowel);
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u') {
                    vowel--;
                }
                i++;
                j++;
            }
        }
        return maxi;
    }
};