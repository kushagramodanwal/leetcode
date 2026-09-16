// Last updated: 16/09/2026, 11:40:12
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;

        for (char c : sentence) {
            st.insert(c);   
        }

        return st.size() == 26;
    }
};
