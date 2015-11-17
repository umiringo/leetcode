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
var maxDepth = function(root) {
    if( root === null ) return 0;
    var depthLeft = maxDepth(root.left);
    var depthRight = maxDepth(root.right);
    return depthLeft > depthRight ? depthLeft + 1 : depthRight + 1;
};