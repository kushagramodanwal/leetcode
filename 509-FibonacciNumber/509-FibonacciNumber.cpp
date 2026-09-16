// Last updated: 16/09/2026, 11:41:11
class Solution {
public:
    int fib(int n) {

        if (n == 1) return 1;
        if (n == 0) return 0;

        return fib(n-1) + fib(n-2);

    }
};