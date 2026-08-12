// Last updated: 12/08/2026, 10:48:17
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
        int n = arr.size();
for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] != 0 && arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    }
};