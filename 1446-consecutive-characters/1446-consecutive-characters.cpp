class Solution {
public:
    int maxPower(string& s) {
        int ans = 1, streak = 1;
        for (int i = 1; i < s.size(); i++)

            if (s[i] == s[i - 1]) {
                streak++;
                ans = max(ans, streak);
            } else
                streak = 1;
        return ans;
    }
};