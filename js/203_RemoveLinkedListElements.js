/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
    var pre = new ListNode();
    pre.next = head;
    var p = pre;
    while(p.next !== null){
        if(p.next.val == val){
            p.next = p.next.next;
        }else{
            p = p.next;
        }
    }
    return pre.next;
};