// Last updated: 12/08/2026, 10:47:01
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        
        int n = piles.size();
        int m = n / 3;   
        int sum = 0;

        int i = n - 2;  

        while (m--) {
            sum += piles[i];
            i -= 2;      
        }

        return sum;
    }
};
