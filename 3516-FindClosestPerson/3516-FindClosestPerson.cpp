// Last updated: 16/09/2026, 11:38:34
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d1 = abs(x - z);
        int d2 = abs(y - z);

        if (d1 < d2) return 1;
        if (d2 < d1) return 2;
        return 0;
    }
};
