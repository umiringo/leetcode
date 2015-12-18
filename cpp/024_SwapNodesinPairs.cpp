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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        auto p = head, q = head->next;
        auto ret = q;
        while(q != NULL ){
            auto t = q->next;
            q->next = p;
            if( t == NULL || t->next == NULL ){
                
                p->next = t;
                return ret;
            }
            p->next = t->next;
            p = t;
            q = t->next;
        }
        return ret;
    }
};

//recursive
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        auto t = head->next;
        head->next = swapPairs(head->next->next);
        t->next = head;
        return t;
    }
};

//prepoint
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode **ret = &head;
        while(*ret != NULL && (*ret)->next != NULL){
            auto p = *ret;
            auto q = p->next;
            p->next = q->next;
            q->next = p;
            *ret = q;
             ret = &(p->next);
        }
        return head;
    }
};
