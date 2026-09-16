// Last updated: 16/09/2026, 11:40:22
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
