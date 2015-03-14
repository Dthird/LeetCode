/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode *p = head;
        while(p != NULL){
            if(p->val == -3214){
                return true;
            }
            p->val = -3214;
            p = p->next;
        }
        return false;
    }
};
