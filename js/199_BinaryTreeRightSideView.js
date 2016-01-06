/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var rightSideView = function(root) {
    var ret = [];
    if(root === null) return ret;
    var queue = [];
    queue.push(root);
    queue.push(null);
    while(queue.length){
        var t = queue.shift();
        if( t !== null){
            var n = queue[0];
            if( n === null) ret.push(t.val);
            if(t.left) queue.push(t.left);
            if(t.right) queue.push(t.right);
        }else{
            if(queue.length) queue.push(null);
        }
    }
    return ret;
};