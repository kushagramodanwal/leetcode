// Last updated: 16/09/2026, 11:42:54
class Solution {
public:

    bool isMirror(TreeNode* p, TreeNode* q) {

        if (p == nullptr && q == nullptr)
            return true;

        if (p == nullptr || q == nullptr)
            return false;

        if (p->val != q->val)
            return false;

        return isMirror(p->left, q->right) &&
               isMirror(p->right, q->left);
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};