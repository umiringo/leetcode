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
var isPalindrome = function(head) {
    if(head === null || head.next === null) return true;
    //find the middle
    var slow = head;
    var fast = head;
    while(fast.next !== null && fast.next.next !== null){
        slow = slow.next;
        fast = fast.next.next;
    }
    //reverse the second half
    slow.next = reverseList(slow.next);
    slow = slow.next;
    //check whether the same
    while(slow !== null){
        if(head.val !== slow.val) return false;
        head = head.next;
        slow = slow.next;
    }
    return true;
};

var reverseList = function(head){
    if(head === null || head.next === null) return head;
    var pre = null;
    while(head !== null){
        var t = head.next;
        head.next = pre;
        pre = head;
        head = t;
    }
    return pre;
}