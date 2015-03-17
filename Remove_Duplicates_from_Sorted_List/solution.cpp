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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL)
            return head;
        ListNode* p = head;
        while(p != NULL){
            ListNode *q = p->next;
            if(q == NULL)
                break;
            if(p->val == q->val){
                ListNode* r = q->next;
                while(r != NULL && r->val == q->val){
                    q = r;
                    r = r->next;
                }
                p->next = q->next;
                delete q;
            }
            else
                p = p->next;
        }
        return head;
    }
};
