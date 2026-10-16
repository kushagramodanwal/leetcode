// Last updated: 16/10/2026, 19:44:21
class Solution {
public:
    int digitFrequencyScore(int n) {

        unordered_map<int, int> mpp;

        while (n) {
            int digits = n % 10;
            n = n / 10;
            mpp[digits]++;
        }
        int sm = 0;
        for (auto x : mpp) {
            sm = sm + (x.first * x.second);
        }
        return sm;
    }
};