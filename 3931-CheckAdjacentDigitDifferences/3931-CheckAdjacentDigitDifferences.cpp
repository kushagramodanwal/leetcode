// Last updated: 16/10/2026, 19:44:26
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        
        for(int i =0; i<s.size()-1;i++){

            if(abs(s[i]-s[i+1])<=2) continue;
            else return false;
        }
        return true;
    }
};