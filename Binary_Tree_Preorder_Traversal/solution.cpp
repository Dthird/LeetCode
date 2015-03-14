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
    void preorder(TreeNode *root, vector<int> &vec){//notice:&
        if(root == NULL)
            return ;
        else{
            vec.push_back(root->val);
            preorder(root->left, vec);
            preorder(root->right, vec);
        }
    }

    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> vec;
        preorder(root, vec);
        return vec;
    }
};
