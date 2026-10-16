// Last updated: 16/10/2026, 19:48:19
// my approach
// integer oveflow

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         long long sum = 0;

//         for (int i = 0; i < digits.size(); i++) {
//             sum = digits[i] * pow(10, digits.size() - i - 1) + sum;
//         }
//         sum+=1;
//         vector<int> d;
//         while(sum!=0){
//             d.push_back(sum%10);
//             sum = sum/10;
//         }
//         reverse(d.begin(),d.end());

//         return d;
//     }
// };

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        // Agar yahan aaye, iska matlab saare digits 9 the.
        // Example: [9,9,9] → [1,0,0,0]
        digits.insert(digits.begin(), 1);

        return digits;
    }
};