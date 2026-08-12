// Last updated: 12/08/2026, 10:48:34
class Solution {
public:
    int reverseBits(int n) {
        string binary = "";

        // Step 1: convert decimal to binary
        while (n > 0) {
            binary = char('0' + (n % 2)) + binary;
            n /= 2;
        }

        // Step 2: pad with leading zeros to make 32 bits
        while (binary.length() < 32) {
            binary = '0' + binary;
        }

        // Step 3: reverse using STL
        reverse(binary.begin(), binary.end());

        // Step 4: convert binary string back to decimal
        int result = 0;
        for (char c : binary) {
            result = result * 2 + (c - '0');
        }

        return result;
    }
};
