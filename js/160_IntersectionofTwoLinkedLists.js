/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    var pA = headA;
    var pB = headB;
    var tA = null;
    var tB = null;
    if( headA === null || headB === null ) return null;
    while(1){
        if( pA === null ) pA = headB;
        if( pB === null ) pB = headA;
        if( pA.next === null ) tA = pA;
        if( pB.next === null ) tB = pB;
        if( tA !== null && tB !== null && tA != tB) return null;
        if( pA === pB ) return pA;
        pA = pA.next;
        pB = pB.next;
    }
    return null;
};