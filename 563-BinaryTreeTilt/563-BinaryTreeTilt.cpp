// Last updated: 16/10/2026, 19:46:54
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int &totalTilt) {
        if (root == nullptr) return 0;

        int l = solve(root->left, totalTilt);    
        int r = solve(root->right, totalTilt);   

        
        totalTilt += abs(l - r);            
        return l + r + root->val;            
    }

    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        solve(root, totalTilt);
        return totalTilt;
    }
};