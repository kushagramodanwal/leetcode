// Last updated: 12/08/2026, 10:46:14
class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        vector<int> v; 
        int temp = num;
        while (temp != 0) {
            v.push_back(temp % 10);
            temp = temp / 10;
        }

        for (int i = 0; i < v.size(); i++) {
            if ((num % v[i]) == 0) count++;
        }
        return count;
    }
};