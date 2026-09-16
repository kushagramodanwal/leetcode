// Last updated: 16/09/2026, 11:40:26
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
