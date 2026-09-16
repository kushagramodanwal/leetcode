// Last updated: 16/09/2026, 11:41:48
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> v;
        int n = nums.size();

        for (int i = 2 * n - 1; i >= 0; i--) {
            if (st.empty())
                v.push_back(-1);

            else if (st.top() > nums[i % n])
                v.push_back(st.top());

            else if (st.top() <= nums[i % n]) {

                while (st.size() > 0 && st.top() <= nums[i % n])
                    st.pop();

                if (st.empty())
                    v.push_back(-1);

                else
                    v.push_back(st.top());
            }

            st.push(nums[i % n]);
        }
        reverse(v.begin(), v.end());
        // return vector<int>(v.begin() + n, v.end());
        return vector<int>(v.begin() , v.end()-n);
    }
};