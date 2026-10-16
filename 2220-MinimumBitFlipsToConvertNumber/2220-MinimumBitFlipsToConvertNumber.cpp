// Last updated: 16/10/2026, 19:45:29
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start ^ goal;
        int count = 0;
        for (int i = 0; i < 32; i++) {
            count += (num & 1);
            num >>= 1;
        }
        return count;
    }
};