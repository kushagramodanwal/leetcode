// Last updated: 17/09/2026, 14:27:06
class Solution {
public:
    int getNext(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};

// my approach
// class Solution {
// public:
//     bool isHappy(int n) {
//         unordered_set<int> seen;

//         while (n != 1) {
//             if (seen.count(n))
//                 return false;

//             seen.insert(n);

//             int sum = 0;

//             while (n > 0) {
//                 int digit = n % 10;
//                 sum += digit * digit;
//                 n /= 10;
//             }

//             n = sum;
//         }
//     }
// };