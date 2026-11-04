class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int high = 0;
        int low = 0;
        int ans = INT_MIN;
        int n = s.size();
        int k = high;
        unordered_map<char, int> freq;
        while (high < n) {
            freq[s[high]]++;
            int k = high - low + 1;
            while (freq.size() < k) {

                freq[s[low]]--;
                if (freq[s[low]] == 0) {
                    freq.erase(s[low]);
                }
                low++;
                k--;
            }
            if (freq.size() == k) {

                int len = high - low + 1;
                ans = max(len, ans);
            }

            high++;
        }
        return (ans != INT_MIN) ? ans : 0;
    }
};