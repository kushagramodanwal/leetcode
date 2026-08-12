// Last updated: 12/08/2026, 10:46:54
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                if(boxes[j] == '1'){
                    sum += abs(i - j);
                }
            }
            v[i] = sum;
        }

        return v;
    }
};
