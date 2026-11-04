class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int high = 0;
        int low = 0;
        int ans = 0;
        int n = fruits.size();
        unordered_map<int, int> freq;
        int k = 2;
        while (high < n) {
            freq[fruits[high]]++;

            while (freq.size() > k) {

                freq[fruits[low]]--;
                if (freq[fruits[low]] == 0) {
                    freq.erase(fruits[low]);
                }
                low++;
            }

            int len = high - low + 1;
            ans = max(len, ans);

            high++;
        }
        return ans;
    }
};