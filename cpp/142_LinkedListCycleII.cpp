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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        auto fast = head;
        auto slow = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                auto detector = head;
                while(detector != slow){
                    detector = detector->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};