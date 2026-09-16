// Last updated: 16/09/2026, 11:41:50
class Solution {
public:
    vector<int> v;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);
        v.push_back(root->val); 
        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);

        unordered_map<int, int> mpp;
        int max_freq = 0;

        for (int x : v) {
            mpp[x]++;
            max_freq = max(max_freq, mpp[x]);
        }

        vector<int> result;
        for (auto pair : mpp) {
            if (pair.second == max_freq) {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};
