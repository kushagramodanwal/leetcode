class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int i = 0;
        int j = 0;
        int total = 0;
        int n = cardPoints.size();
        for (int i = 0; i < n; i++) {
            total += cardPoints[i];
        }

        int ws = n - k;
        int mini = INT_MAX;
        int sum = 0;
        if (ws == 0)
            return total;

        while (j < n) {

            sum += cardPoints[j];
            if (j - i + 1 < ws)
                j++;
            else if (j - i + 1 == ws) {

                mini = min(mini, sum);
                sum -= cardPoints[i];

                i++;
                j++;
            }
        }
        return total - mini;
    }
};