// Last updated: 16/10/2026, 19:48:45
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;

                if ((c == ')' && st.top() != '(') ||
                    (c == ']' && st.top() != '[') ||
                    (c == '}' && st.top() != '{')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};

// Mistakes:
// 1. st.top() use karne se pehle st.empty() check nahi kiya -> "]" jaise case me runtime error.
// 2. Agar closing bracket ka matching opening bracket nahi mila, toh false return nahi kiya.
// 3. Multiple if or krle likho or ek baar st.pop
// 4. End me st.empty() check zaroori hai, taaki "(((" jaise unmatched opening brackets catch ho sake.