// Last updated: 12/08/2026, 10:48:50
class Solution {
public:
    int mySqrt(int x) {
        long long s =0;
        long long e = x;
        bool flag = false;
        while(s<=e){
            long long m= s +(e-s)/2;
            if(m*m == x) return m;
            else if(m*m < x) {
                        s = m+1;
            }
            else e = m-1;

        }
        return e;
    }
};