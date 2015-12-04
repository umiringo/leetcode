/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    var pre = new ListNode(-1);
    pre.next = head;
    var p = pre;
    var q = head;
    for(var i = 0; i < n-1; i++){
        q = q.next;
    }
    while(q.next !== null){
        p = p.next;
        q = q.next;
    }
    p.next = p.next.next;
    return pre.next;
};