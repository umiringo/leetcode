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
 
//Recursive
var preorderTraversal = function(root) {
    var ret = [];
    if(root === null) return ret;
    ret.push(root.val);
    var leftRet = preorderTraversal(root.left);
    ret = ret.concat(leftRet);
    leftRet = null;
    var rightRet = preorderTraversal(root.right);
    ret = ret.concat(rightRet);
    rightRet = null;
    
    return ret;
};

//Iterative
var preorderTraversal = function(root) {
    var ret = [];
    var stack = [];
    stack.push(root);
    while(stack.length > 0){
        var t = stack.pop();
        if(t !== null){
            ret.push(t.val);
            if(t.right) stack.push(t.right);
            if(t.left) stack.push(t.left);
        }
    }
    return ret;
};