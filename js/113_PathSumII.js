/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} sum
 * @return {number[][]}
 */
var pathSum = function(root, sum) {
    var ret = [];
    var path = [];
    fetchPath(root,ret,path,sum);
    return ret;
};

var fetchPath = function(root,ret,path,sum){
    if(!root) return;
    if(root.val === sum && root.left === null && root.right === null) ret.push(path.concat(root.val));
    fetchPath(root.left, ret,path.concat(root.val),sum-root.val);
    fetchPath(root.right,ret,path.concat(root.val),sum-root.val);
};