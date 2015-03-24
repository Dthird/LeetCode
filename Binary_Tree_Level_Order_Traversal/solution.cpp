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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > res;
        vector<int> vec;
        if(root == NULL)
            return res;
        queue<TreeNode*> qu;
        qu.push(root);
        qu.push(NULL);
        while(!qu.empty()){
            TreeNode *temp = qu.front();
            qu.pop();
            if(temp == NULL){
                res.push_back(vec);
                vec.resize(0);
                if(qu.size() != 0)
                    qu.push(NULL);
            }
            else{
                vec.push_back(temp->val);
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
            }
        }
        return res;
    }
};
