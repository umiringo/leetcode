/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestorNoRecursion = function(root, p, q) {
    var n = root;
    while( n !== null){
        if( n.val > p.val && n.val > q.val ) n = n.left;
        else if( n.val < p.val && n.val < q.val ) n = n.right;
        else return n;
    }
    return n;
};

var lowestCommonAncestorRecursion = function(root, p, q) {
    if(root.val > p.val && root.val > q.val) return lowestCommonAncestorRecursion(root.left, p, q);
    else if(root.val < p.val && root.val < q.val) return lowestCommonAncestorRecursion(root.right, p, q);
    else return root;
};