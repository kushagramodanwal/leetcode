// Last updated: 12/08/2026, 10:45:35
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n=0;
        int temp =x;
        while(temp!=0){
            
            n = n + (temp % 10);
            temp = temp/10;
        }        

        if (x % n == 0){ return n;}
        else{ return -1;}
    }
};