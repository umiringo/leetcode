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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode **p = &head, *q = head;
        for(int i = 0; i < n-1; ++i){
            q = q->next;
        }
        while( q->next != NULL ){
            p = &((*p)->next);
            q = q->next;
        }
        *p = (*p)->next;
        return head;
    }
};