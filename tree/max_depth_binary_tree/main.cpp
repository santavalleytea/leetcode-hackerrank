class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int depth = max(maxDepth(root->left), maxDepth(root->right));

        return 1 + depth;
    }
};
