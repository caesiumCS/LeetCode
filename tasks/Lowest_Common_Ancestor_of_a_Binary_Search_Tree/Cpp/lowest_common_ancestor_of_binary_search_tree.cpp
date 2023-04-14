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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (true) {
            if (root == p) {
                return p;
            }
            if (root == q) {
                return q;
            }

            if ((q->val < root->val && p->val > root->val) || (q->val > root->val && p->val < root->val)) {
                return root;
            } else if (q->val < root->val && p->val < root->val) {
                root = root->left;
            } else {
                root = root->right;
            }
        }
    }
};