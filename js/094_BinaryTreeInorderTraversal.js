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
var inorderTraversal = function(root) {
    var ret = [];
    var stack = [];
    var cur = root;
    while(stack.length || cur !== null){
        if(cur !== null){
            stack.push(cur);
            cur = cur.left;
        }else{
            var t = stack.pop();
            ret.push(t.val);
            cur = t.right;
        }
    }
    return ret;
};