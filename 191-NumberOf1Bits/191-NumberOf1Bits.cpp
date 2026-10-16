// Last updated: 16/10/2026, 19:47:43
class Solution {
public:
    int hammingWeight(int n) {

        int count = 0;
        while (n > 0) {
            n = n & (n - 1);
            count++;
        }
        return count;
    }

}
;