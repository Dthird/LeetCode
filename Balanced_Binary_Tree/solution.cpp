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
    int depth(TreeNode *root){
        if(root == NULL)
            return 0;
        return max(depth(root->left) + 1 , depth(root->right) + 1);
    }
    
    bool isBalanced(TreeNode *root) {
        if(root == NULL)
            return true;
        
        else{
            if(abs(depth(root->left) - depth(root->right)) > 1)
                return false;
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
};
