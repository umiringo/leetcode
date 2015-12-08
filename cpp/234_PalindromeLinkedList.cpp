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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next ==NULL) return true;
        //find middle
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reverse the second half
        slow->next = reverseList(slow->next);
        slow = slow->next;
        //check whether same
        while(slow != NULL){
            if(head->val != slow->val) return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
private:
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* p = head;
        ListNode* pre = NULL;
        while( p != NULL ){
            ListNode *t = p->next;
            p->next = pre;
            pre = p;
            p = t;
        }
        return pre;
    }
};