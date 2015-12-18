/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function(root, k) {
    var count = countNode(root.left);
    if(k <= count) return kthSmallest(root.left,k);
    else if(k > count + 1) return kthSmallest(root.right, k - count - 1);
    return root.val;
};

var countNode = function(root){
    if(root === null) return 0;
    return 1 + countNode(root.left) + countNode(root.right);
}