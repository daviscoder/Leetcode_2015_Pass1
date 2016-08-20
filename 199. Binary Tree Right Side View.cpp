/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void helper (vector<int>& res, TreeNode *root, int level) {
        if (root == NULL) return;
        if (level == res.size())
            res.push_back (root->val);
        helper (res, root->right, level + 1);
        helper (res, root->left, level + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        helper (res, root, 0);
        return res;
    }
};
