// Last updated: 16/09/2026, 11:42:39
class Solution {
public:
    int height(TreeNode* node) {
        if (node == NULL)
            return 0;

        return 1 + max(height(node->left), height(node->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;

        int lHeight = height(root->left);
        int rHeight = height(root->right);

        if (abs(lHeight - rHeight) > 1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};