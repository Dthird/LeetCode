/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
        p -> right -> next = p -> next -> left
    */
    void connect(TreeLinkNode *root) {
        if(root == NULL)
            return ;
        else{
            while(root -> left){
                TreeLinkNode *p = root;
                while(p){
                    p->left->next = p->right;
                    if(p->next != NULL){
                        p->right->next = p->next->left;
                    }
                    p = p->next;
                }
                root = root->left;
            }
        }
    }
};
