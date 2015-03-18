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
    TreeNode *helper(vector<int> &num, int start, int end){
        if(start > end)
            return NULL;
        int mid = (start + end) / 2;
        TreeNode *head = new TreeNode(num[mid]);
        head->left = helper(num, start, mid - 1);
        head->right = helper(num, mid + 1, end);
        return head;
    }
    

    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(num.size() == 0)
            return NULL;
        return helper(num, 0 , num.size() - 1);
    }
};
