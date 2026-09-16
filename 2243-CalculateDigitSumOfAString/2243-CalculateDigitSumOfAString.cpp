// Last updated: 16/09/2026, 11:39:44
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string s2 = "";
            for(int i=0;i<s.size();i = i+k){
                int sum = 0;
                string s1 = s.substr(i,k);
                for(char c : s1){
                    sum = sum + c - '0';
                }
                s2 = s2 + to_string(sum);
            }
            s = s2;
        }
        return s;
    }
};