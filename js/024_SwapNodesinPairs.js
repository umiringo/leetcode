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

 //recursive
var swapPairs = function(head) {
    if(head === null || head.next === null) return head;
    var t = head.next
    head.next = swapPairs(head.next.next);
    t.next = head;
    return t;
};

//prepoint
