// Last updated: 16/09/2026, 11:42:36
class Solution {
public:
    int minDepth(TreeNode* root) {

        if (root == nullptr)
            return 0;

        if (root->left == nullptr && root->right == nullptr)
            return 1;

        if (root->left == nullptr)
            return 1 + minDepth(root->right);

        if (root->right == nullptr)
            return 1 + minDepth(root->left);

        int lh = minDepth(root->left);
        int rh = minDepth(root->right);

        return 1 + min(lh, rh);
    }
};