// Last updated: 16/10/2026, 19:46:30
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
    set<int> v;
    set<int> inorder(TreeNode* root) {
        if (root == nullptr)
            return{};

        inorder(root->left);
        v.insert(root->val);
        inorder(root->right);
        return v;
    }

    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr)
            return true;

        v = inorder(root);

        if (v.size() == 1) return true;
        else return false;

    }
};