// Last updated: 16/09/2026, 11:41:51
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        vector<pair<int, int>> v;
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> mpp;

        for (int i = n2 - 1; i >= 0; i--) {
            if (st.empty())
                v.push_back({nums2[i], -1});

            else if (st.top() > nums2[i])
                v.push_back({nums2[i], st.top()});

            else if (st.top() <= nums2[i]) {
                while (st.size() > 0 && st.top() < nums2[i]) {
                    st.pop();
                }

                if (st.empty())
                    v.push_back({nums2[i], -1});
                else
                    v.push_back({nums2[i], st.top()});
            }

            st.push(nums2[i]);
        }

        // for (int i = 0; i < v.size(); i++) {
        //     cout << v[i].second;
        // }

        for (auto p : v) {
            mpp[p.first] = p.second;
        }

        vector<int> ans;

        for (int x : nums1) {
            if (mpp.count(x)) {
                ans.push_back(mpp[x]);
            }
        }

        return ans;
    }
};

// easier way
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

//         stack<int> st;
//         unordered_map<int, int> mpp;

//         for (int i = nums2.size() - 1; i >= 0; i--) {

//             while (!st.empty() && st.top() < nums2[i]) {
//                 st.pop();
//             }

//             if (st.empty()) {
//                 mpp[nums2[i]] = -1;
//             } else {
//                 mpp[nums2[i]] = st.top();
//             }

//             st.push(nums2[i]);
//         }

//         vector<int> ans;

//         for (int x : nums1) {
//             ans.push_back(mpp[x]);
//         }

//         return ans;
//     }
// };