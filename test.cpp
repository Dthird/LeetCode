#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        if(head == NULL)
            return NULL;
        ListNode *sorted = head;
        ListNode *p = head->next;
        while(p != NULL){
            cout << "111" << endl;
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
};

int main(){
    ListNode * head = new ListNode(2);
    head->next = new ListNode(1);
    Solution s;
    head = s.insertionSortList(head);
	return 0;
}


