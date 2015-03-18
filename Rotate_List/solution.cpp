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
    ListNode *rotateRight(ListNode *head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int count = 0;
        ListNode *p, *q;
        for(p=head ; p!=NULL ; p=p->next){
            q = p;
            count++;
        }
        q->next = head;
        int rotate = count - (k % count);
        //int rotate = count - k;
        //if(rotate == 0)
        //    return head;
        p = q;
        for(int i=1 ; i<=rotate ; i++){
            p = p->next;
        }
        q = p->next;
        p->next = NULL;
        return q;
    }
};
