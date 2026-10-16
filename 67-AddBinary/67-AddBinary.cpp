// Last updated: 16/10/2026, 19:48:18
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int total = carry;
            if (i >= 0) {
                total += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                total += b[j] - '0';
                j--;
            }
            result += to_string(total % 2);
            carry = total / 2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};