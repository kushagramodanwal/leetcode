// Last updated: 16/09/2026, 11:40:39
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans ^= (start + 2 * i);
        }
        return ans;
    }
};
