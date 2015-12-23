/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //to L1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto p = l1;
        auto q = l2;
        auto k = l1;
        int carry = 0;
        while(p != NULL && q != NULL){
            int val = p->val + q->val + carry;
            carry = val/10;
            p->val = val % 10;
            k = p;
            p = p->next;
            q = q->next;
        }
        while(p != NULL){
            int val = p->val + carry;
            carry = val/10;
            p->val = val%10;
            k = p;
            p = p->next;
        }
        if(q != NULL) k->next = q;
        while(q != NULL){
            int val =  q->val + carry;
            carry = val/10;
            q->val = val%10;
            k = q;
            q = q->next;
        }
        if(carry != 0){
            ListNode* n = new ListNode(carry);
            k->next = n;
        }
        
        return l1;
    }
};

//new link list
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *pre = new ListNode(0);
        ListNode *ret = pre;
        int sum = 0;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            ret->next = new ListNode(sum%10);
            ret = ret->next;
            sum /= 10;
        }
        if(sum > 0){
            ret->next = new ListNode(sum % 10);
            ret = ret->next;
        }
        return pre->next;
    }
};