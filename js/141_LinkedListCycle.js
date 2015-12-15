/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
    var p = head, q = head;
    while(q !== null && q.next !== null){
        p = p.next;
        q = q.next.next;
        if(p === q) return true;
    }
    return false;
};