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
    /*two pass solution
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        int count = 0;
        ListNode* p;
        for(p = head ; p != NULL ; p=p->next){
            count ++;
        }
        if(count == 0 || count == 1)
            return NULL;
        if(count - n == 0)
            return head->next;
        p = head;
        for(int i=1 ; i<count - n ; i++){
            p = p->next;
        }
        ListNode *q = p->next;
        if(q != NULL){
            p->next = q->next;
        }
        else
            p->next = NULL;
        delete q;
        return head;
    }
    */
    //one pass solution
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
    }
};
