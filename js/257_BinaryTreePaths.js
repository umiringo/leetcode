/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {string[]}
 */
var binaryTreePaths = function(root) {
    var ret = [];
    if(root === null) return ret;
    pathTree(root,root.val.toString(),ret);
    return ret;
};

var pathTree = function(root,pre,ret){
    if(root.left === null && root.right === null){
        ret.push(pre);
        return;
    }
    if(root.left !== null) pathTree(root.left, pre+"->"+root.left.val.toString(), ret);
    if(root.right !== null) pathTree(root.right, pre+"->"+root.right.val.toString(), ret);
};