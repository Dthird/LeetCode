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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > res;
        if(root == NULL)
            return res;
        queue<TreeNode*> qu;
        qu.push(root);
        qu.push(NULL);
        vector<int> vec;
        while(!qu.empty()){
            TreeNode* temp = qu.front();
            qu.pop();
            if(temp == NULL){
                res.push_back(vec);
                vec.resize(0);
                if(qu.size() > 0)
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
        
        vector<vector<int> > rres;
        for(int i=res.size()-1 ; i>=0 ; i--)
            rres.push_back(res[i]);
        
        return rres;
    }
};
