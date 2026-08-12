// Last updated: 12/08/2026, 10:45:51
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;

        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target)
                count++;
        }

        return count;
    }
};
