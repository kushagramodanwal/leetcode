// Last updated: 16/09/2026, 11:40:54
class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        while (n > 0) {
            v.push_back(n % 10);
            n /= 10;
        }

        int sum = 0;
        int product = 1;

        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
            product *= v[i];
        }

        return product - sum;
    }
};
