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
    /*time limit
    ListNode *insertionSortList(ListNode *head) {
        if(head == NULL)
            return NULL;
        ListNode *sorted = head;
        ListNode *p = head->next;
        while(p != NULL){
            if(p->val < sorted->val){
                if(p->val < head->val){
                    ListNode *temp = p->next;
                    p->next = head;
                    head = p;
                    p = temp;
                }
                else{
                    ListNode *curr = head->next;
                    ListNode *prev = head;
                    while(p->val < curr->val){
                        curr = curr->next;
                        prev = prev->next;
                    }
                    ListNode *temp = p->next;
                    p->next = curr;
                    prev->next = p;
                    p = temp;
                }
            }
            else{
                p = p->next;
                sorted = sorted->next;
            }
        }
        return head;
    }
    */
    ListNode *insertionSortList(ListNode *head){
        if( head == NULL )
            return head;

        ListNode* helper = new ListNode(0); //new starter of the sorted list
        ListNode* cur = head; //the node will be inserted
        ListNode* pre = helper; //insert node between pre and pre.next
        ListNode* next = NULL; //the next node will be inserted
        //not the end of input list
        while( cur != NULL ){
            next = cur->next;
            //find the right place to insert
            while( pre->next != NULL && pre->next->val < cur->val ){
                pre = pre->next;
            }
            //insert between pre and pre.next
            cur->next = pre->next;
            pre->next = cur;
            pre = helper;
            cur = next;
        }

        return helper->next;
    }
};
