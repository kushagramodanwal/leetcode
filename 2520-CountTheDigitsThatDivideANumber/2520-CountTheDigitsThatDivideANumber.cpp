// Last updated: 16/09/2026, 11:39:31
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