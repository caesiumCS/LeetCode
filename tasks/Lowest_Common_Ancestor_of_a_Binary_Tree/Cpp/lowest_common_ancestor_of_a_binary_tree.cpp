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

    bool dfsRecursiveCall(TreeNode* current, TreeNode* node, stack<TreeNode*>& s) {
        if (current == node) {
            return true;
        }
        bool res;
        if (current->left != NULL) {
            s.push(current->left);
            res = dfsRecursiveCall(current->left, node, s);
            if (res) {
                return true;
            }
            s.pop();
        }
        if (current->right != NULL) {
            s.push(current->right);
            res = dfsRecursiveCall(current->right, node, s);
            if (res) {
                return true;
            }
            s.pop();
        }
        return false;
    }

    stack<TreeNode*> dfs(TreeNode* root, TreeNode* node) {
        stack<TreeNode*> s;
        s.push(root);
        dfsRecursiveCall(root, node, s);
        return s;
    }

    vector<TreeNode*> stackToVector(stack<TreeNode*> s) {
        vector<TreeNode*> vec(s.size());
        for (int i = s.size() - 1; i >= 0; i--) {
            vec[i] = s.top();
            s.pop();
        }
        return vec;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p == root) {
            return p;
        }
        if (q == root) {
            return q;
        }
        TreeNode* rootTmp = root;
        vector<TreeNode*> pvec = stackToVector(dfs(rootTmp, p));
        rootTmp = root;
        vector<TreeNode*> qvec = stackToVector(dfs(rootTmp, q));
        int pointer = 0;
        int minDepth;
        if (pvec.size() < qvec.size()) minDepth = pvec.size();
        else minDepth = qvec.size();
        for (int i = 1; i < minDepth; i++) {
            if (pvec[i] != qvec[i]) {
                return pvec[pointer];
            }
            pointer++;
        }
        return pvec[pointer];
    }
};