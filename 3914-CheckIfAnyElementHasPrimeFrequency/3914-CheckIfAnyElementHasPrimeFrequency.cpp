// Last updated: 12/08/2026, 10:45:12
class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (isPrime(it.second)) {
                return true;
            }
        }
        return false;
    }
};
