// Last updated: 16/09/2026, 11:41:04
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int n = heights.size();
        sort(expected.begin(), expected.end());
        int count = 0;
        for (int i = 0; i < n; i++) {

            if (heights[i] != expected[i])
                count++;
        }
        return count;
    }
};