// Last updated: 16/09/2026, 11:38:18
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        vector<int> idx;      
        vector<int> ans;     

        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < friends.size(); j++) {
                if (order[i] == friends[j]) {
                    idx.push_back(i);
                }
            }
        }

        sort(idx.begin(), idx.end());

        for (int i = 0; i < idx.size(); i++) {
            ans.push_back(order[idx[i]]);
        }

        return ans;
    }
};
