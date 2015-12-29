/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumNumbers = function(root) {
    if(root === null) return 0;
    return sumTree(root,0);
};

var sumTree = function(root, val){
    if(root.left === null && root.right === null) return val*10 + root.val;
    var ret = 0;
    if(root.left !== null) ret += sumTree(root.left, 10*val + root.val);
    if(root.right !== null) ret += sumTree(root.right, 10*val + root.val);
    return ret;
}