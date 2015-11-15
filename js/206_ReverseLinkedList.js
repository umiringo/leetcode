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
var reverseList = function(head) {
    if(head === null || head.next === null) return head;
    var p = head;
    var q = null;
    while( p !== null ){
        var t = p.next;
        p.next = q;
        q = p;
        p = t;
    }
    return q;
};