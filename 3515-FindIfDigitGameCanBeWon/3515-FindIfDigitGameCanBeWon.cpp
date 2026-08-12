// Last updated: 12/08/2026, 10:45:26
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0, doubleSum = 0;

        for (int num : nums) {
            if (num < 10)
                singleSum += num;
            else
                doubleSum += num;
        }

        int total = singleSum + doubleSum;

        if (singleSum > total - singleSum) return true;
        if (doubleSum > total - doubleSum) return true;

        return false;
    }
};
