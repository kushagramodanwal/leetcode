// Last updated: 16/10/2026, 19:46:11
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mpp;
        
        for (auto x : text) {
            mpp[x]++;
        }

        return min({
            mpp['b'], 
            mpp['a'], 
            mpp['l'] / 2, 
            mpp['o'] / 2, 
            mpp['n']
        });
    }
};
