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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA;
        ListNode *pB = headB;
        ListNode *tA = NULL;
        ListNode *tB = NULL;
        if(headA == NULL || headB == NULL) return NULL;
        while(1){
            if(pA == NULL) pA = headB;
            if(pB == NULL) pB = headA;
            if(pA->next == NULL) tA = pA;
            if(pB->next == NULL) tB = pB;
            if(tA != NULL && tB != NULL && tA != tB) return NULL;
            if(pA == pB) return pA;
            pA = pA->next;
            pB = pB->next;
        }
        return NULL;
    }
};