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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        auto p = head;
        while( p->next != NULL ){
            if( p->val == p->next->val ){
                p->next = p->next->next;
            } else {
                p = p->next;
            }
        }
        return head;
    }
};