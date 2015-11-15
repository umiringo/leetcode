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
    ListNode* reverseList(ListNode* head) {
        if( head == NULL || head->next == NULL ) return head;
        ListNode *p = head;
        ListNode *q = NULL;
        while(p != NULL){
            ListNode *t = p->next;
            p->next = q;
            q = p;
            p = t;
        }
        return q;
    }
};