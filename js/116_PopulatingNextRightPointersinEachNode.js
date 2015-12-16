/**
 * Definition for binary tree with next pointer.
 * function TreeLinkNode(val) {
 *     this.val = val;
 *     this.left = this.right = this.next = null;
 * }
 */

/**
 * @param {TreeLinkNode} root
 * @return {void} Do not return anything, modify tree in-place instead.
 */
var connect = function(root) {
    if(!root) return;
    var queue = [];
    queue.push(root);
    queue.push(null);
    while(queue.length){
        var t = queue.shift();
        if(t !== null){
            t.next = queue[0];
            if(t.left) queue.push(t.left);
            if(t.right) queue.push(t.right);
        }else{
            if(queue.length) queue.push(null);
        }
    }
};