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
    int help(TreeNode* root, int n){
        if(root == 0)
            return INT_MAX;
        if(root->left == NULL && root->right == NULL)
            return n + 1;
        else
            return min(help(root->left, n + 1), help(root->right, n + 1)); 
    }
    
    int minDepth(TreeNode *root) {
        return root==NULL? 0 : help(root,0);
     }
};
