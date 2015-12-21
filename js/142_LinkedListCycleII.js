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
var detectCycle = function(head) {
    if(!head) return null;
    var fast = head;
    var slow = head;
    while(fast.next !== null && fast.next.next !== null){
        fast = fast.next.next;
        slow = slow.next;
        if(fast === slow){
            var detector = head;
            while(detector !== slow){
                slow = slow.next;
                detector = detector.next;
            }
            return detector;
        }
    }
    return null;
};