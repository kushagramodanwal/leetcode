class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int n = fruits.size();
        unordered_map<int, int> mpp;
        int maxi = 0;

        for (int j = 0; j < n; j++) {
            mpp[fruits[j]]++;

            while (mpp.size() > 2) {
                mpp[fruits[i]]--;
                if (mpp[fruits[i]] == 0) {
                    mpp.erase(fruits[i]);
                }
                i++;
            }
            maxi = max(maxi, j - i + 1);
        }
        return maxi;
    }
};