class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i = 0;
        int j = 0;
        int n = customers.size();
        int ws = minutes;
        int b = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0)
                b += customers[i];
        }

        int cnt = 0;
        int maxi = 0;

        while (j < n) {

            if (grumpy[j] == 1)
                cnt += customers[j];

            if (j - i + 1 < ws)
                j++;
            else if (j - i + 1 == ws) {

                maxi = max(maxi, cnt);

                if (grumpy[i] == 1) {
                    cnt -= customers[i];
                }

                i++;
                j++;
            }
        }

        return b + maxi;
    }
};