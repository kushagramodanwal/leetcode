// Last updated: 16/09/2026, 11:42:52
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if (root == nullptr)
            return {};

        vector<vector<int>> ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {

                TreeNode* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};