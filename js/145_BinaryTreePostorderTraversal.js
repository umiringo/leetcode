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
var postorderTraversal = function(root) {
    var ret = [];
    var stack = [];
    stack.push(root);
    while(stack.length > 0){
        var t = stack[stack.length-1];
        if(t === null){
            stack.pop();
            if(stack.length > 0){
                var p = stack.pop();
                if(p !== null) ret.push(p.val);
            }
        }else{
            if(t.left === null && t.right === null){
                ret.push(t.val);
                stack.pop();
            }else{
                stack.push(null);
                if(t.right !== null) stack.push(t.right);
                if(t.left !== null) stack.push(t.left);
            }
        }
    }
    return ret;
};