// Last updated: 12/08/2026, 10:46:48
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
