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
    int MAX_DEPTH = 0;

    void recursionCall(TreeNode* root, bool isPrevLeft, int depth) {
        if (MAX_DEPTH < depth) {
            MAX_DEPTH = depth;
        }

        if (isPrevLeft) {

            if (root->right != nullptr) {
                recursionCall(root->right, false, depth + 1);
            }

            if (root->left != nullptr) {
                recursionCall(root->left, true, 1);
            }

        } else {

            if (root->right != nullptr) {
                recursionCall(root->right, false, 1);
            }

            if (root->left != nullptr) {
                recursionCall(root->left, true, depth + 1);
            }
        }
    }

    int longestZigZag(TreeNode* root) {
        if (root->left != nullptr) {
            recursionCall(root->left, true, 1);
        }

        if (root->right != nullptr) {
            recursionCall(root->right, false, 1);
        }

        return MAX_DEPTH;
    }
};