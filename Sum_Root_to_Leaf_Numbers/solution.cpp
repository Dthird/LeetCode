/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode *root) {
        return helper(root, 0);
    }

    int helper(TreeNode* n, int sum) {
        if (n==NULL) {
            return 0;
        }
        sum = sum*10+n->val;

        if (!n->left && !n->right) {
            return sum;
        } 
        int tot = helper(n->left, sum);
        tot += helper(n->right, sum);
        return tot;
    }
};
