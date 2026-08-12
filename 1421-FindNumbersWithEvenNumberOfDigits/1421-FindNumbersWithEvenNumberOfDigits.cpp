// Last updated: 12/08/2026, 10:47:22
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count1 = 0;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            while (nums[i] != 0) {
                nums[i] = nums[i] / 10;
                count++;
            }
            if (count % 2 == 0)
                {flag = true;
                count1++;}
        }
        if (flag == false) return 0;
        else return count1;
    }
};