// Last updated: 16/10/2026, 19:47:16
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> topThree;
        
        for (int num : nums) {
            topThree.insert(num);
            if (topThree.size() > 3) {
                topThree.erase(topThree.begin());
            }
        }
        
        if (topThree.size() == 3) {
            return *topThree.begin();
        }
        
        return *topThree.rbegin();
    }
};
