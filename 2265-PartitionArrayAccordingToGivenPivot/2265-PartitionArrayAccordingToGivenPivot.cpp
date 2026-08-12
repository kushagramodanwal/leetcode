// Last updated: 12/08/2026, 10:46:28
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> smaller;  
        vector<int> equal;    
        vector<int> greater; 

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                smaller.push_back(nums[i]);
            }
            else if (nums[i] == pivot) {
                equal.push_back(nums[i]);
            }
            else {
                greater.push_back(nums[i]);
            }
        }

        vector<int> result;

        for (int i = 0; i < smaller.size(); i++) {
            result.push_back(smaller[i]);
        }

        for (int i = 0; i < equal.size(); i++) {
            result.push_back(equal[i]);
        }

        for (int i = 0; i < greater.size(); i++) {
            result.push_back(greater[i]);
        }

        return result;
    }
};
