#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    /* memory limited
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> st;
        if(root == NULL)
            return res;
        st.push(root);
        while(!st.empty()){
            if(st.top()->left == NULL && st.top()->right == NULL){
                res.push_back(st.top()->val);
                st.top() = NULL;
                st.pop();
            }
            else if(st.top()->left == NULL && st.top()->right != NULL){
                st.push(st.top()->right);
            }
            else if(st.top()->left != NULL && st.top()->right == NULL){
                st.push(st.top()->left);
            }
            else{//(st.top()->left != NULL && st.top()->right != NULL)
                st.push(st.top()->right);
                st.push(st.top()->left);
            }
        }
        return res;
    }
    */
     vector<int> postorderTraversal(TreeNode *root) {
        if (!root) {
            return {};
        }

        vector<int> res;
        using item = pair<TreeNode*, bool>;
        stack<item, vector<item>> work;
        work.push({root, false});
        while (!work.empty()) {
            auto& cur = work.top();
            if (cur.second) {
                res.push_back(cur.first->val);
                work.pop();
            } else {
                cur.second = true;
                auto node = cur.first;
                if (node->right) {
                    work.push({node->right, false});
                }
                if (node->left) {
                    work.push({node->left, false});
                }
            }
        }

        return res;
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    Solution s;
    vector<int> vec;
    vec = s.postorderTraversal(root);
    cout << vec[0];
	return 0;
}


