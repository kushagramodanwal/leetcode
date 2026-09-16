// Last updated: 16/09/2026, 11:40:36
class Solution {
public:
    int countOdds(int low, int high) {

    int count = 0;
        for(int i = low; i <= high; i++) {
            if(i % 2 != 0) count++;
        }
        return count;
    }
};