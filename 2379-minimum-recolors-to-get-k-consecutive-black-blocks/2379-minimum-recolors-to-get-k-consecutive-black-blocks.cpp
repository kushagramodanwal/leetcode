class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int i = 0;
        int j = 0;
int n = blocks.size();
        int ws = k;
        int cnt = 0;
        int mini = INT_MAX;
        while (j < n) {

            if (blocks[j] == 'W')
                cnt++;
            if (j - i + 1 < ws)
                j++;
            else if (j - i + 1 == ws) {

                mini= min(mini,cnt);
                if (blocks[i] == 'W') {
                    cnt--;
                }
                i++;
                j++;
            }
        }
        return mini;
    }
};