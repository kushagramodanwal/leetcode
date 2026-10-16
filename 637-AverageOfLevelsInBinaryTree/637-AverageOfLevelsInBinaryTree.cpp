// Last updated: 16/10/2026, 19:46:49
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (root == nullptr)
            return {};

        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            long long sum = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                sum += curr->val;

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }

            double avg = (double)sum / size;
            ans.push_back(avg);
        }

        return ans;
    }
};
