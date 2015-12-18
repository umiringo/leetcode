/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
//recursive
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

//prepoint
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    var pre = new ListNode(0);
    pre.next = head;
    
    for(var cur = pre; cur.next !== null && cur.next.next !== null; cur = cur.next.next){
        var p = cur.next;
        var q = cur.next.next;
        p.next = q.next;
        q.next = p;
        cur.next = q;
    }
    return pre.next;
};