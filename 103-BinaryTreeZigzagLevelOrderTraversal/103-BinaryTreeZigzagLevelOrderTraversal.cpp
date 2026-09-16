// Last updated: 16/09/2026, 11:42:47
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root ==nullptr) return {};
        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> ans;

        while (!q.empty()) {
            
            int size = q.size();
            vector<int> levels;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                levels.push_back(curr->val);

                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            ans.push_back(levels);
        }
        for (int i = 1; i < ans.size(); i += 2) {
            reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};