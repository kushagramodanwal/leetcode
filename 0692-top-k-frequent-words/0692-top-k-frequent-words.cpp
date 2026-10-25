
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;

        for (int i = 0; i < words.size(); i++) {
            mp[words[i]]++;
        }

        vector<pair<string, int>> v;

        for (auto it : mp) {
            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.second != b.second) {
                return a.second > b.second;
            }
            return a.first < b.first;
        });

        vector<string> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
