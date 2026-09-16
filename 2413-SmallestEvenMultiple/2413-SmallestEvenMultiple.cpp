// Last updated: 16/09/2026, 11:39:43
class Solution {
public:
    int smallestEvenMultiple(int n) {
        for (int i = n; ; i++) {
            if (i % n == 0 && i % 2 == 0) {
                return i;
            }
        }
    }
};
