// Last updated: 16/09/2026, 11:39:27
class Solution {
public:
    int alternateDigitSum(int n) {
        int psum = 0;
        int nsum = 0;
        vector<int> v;
        while (n != 0) {
            v.push_back(n % 10);
            n = n / 10;
        }
        reverse(v.begin(),v.end());
        for (int i = 0; i < v.size(); i = i + 2)
            psum = psum + v[i];
        for (int i = 1; i < v.size(); i = i + 2)
            nsum = nsum + (-v[i]);

        int ans = nsum + psum;
        return ans;
    }
};