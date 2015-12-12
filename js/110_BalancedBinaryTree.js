/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isBalanced = function(root) {
    if(root === null) return true;
    return isBalanced(root.left) && isBalanced(root.right) && Math.abs(getHeight(root.right) - getHeight(root.left)) <= 1;
};

var getHeight = function(root){
    if(root === null) return 0;
    return Math.max(getHeight(root.left), getHeight(root.right)) + 1;
}