// Last updated: 12/08/2026, 10:46:20
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
