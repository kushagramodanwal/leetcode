// Last updated: 16/10/2026, 19:47:00
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int subtreeSum(TreeNode*& root) {
        if (root == nullptr)
            return 0;

        int l = subtreeSum(root->left);
        int r = subtreeSum(root->right);

        root->val = root->val + l + r;
        return root->val;
    }
    unordered_map<int, int> mpp;
    void inorder(TreeNode*& root) {
        if (root == nullptr)
            return;

        inorder(root->left);
        mpp[root->val]++;
        inorder(root->right);

        return;
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {

        if (root == nullptr)
            return {};
        subtreeSum(root);

        inorder(root);

        int maxFreq = 0;

        for (auto x : mpp) {
            maxFreq = max(maxFreq, x.second);
        }

        vector<int> ans;

        for (auto x : mpp) {
            if (x.second == maxFreq) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};