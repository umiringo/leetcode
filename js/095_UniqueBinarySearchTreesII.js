/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number} n
 * @return {TreeNode[]}
 */
var generateTrees = function(n) {
    if(n < 1) return [];
    return recursive(1,n);
};

var recursive = function(b, e){
    var ret = [];
    if(b > e){
        ret.push(null);
        return ret;
    }
    for(var i = b; i <= e; ++i){
        var left = recursive(b, i-1);
        var right = recursive(i+1, e);
        for(var l in left){
            for(var r in right){
                var node = new TreeNode(i);
                node.left = left[l];
                node.right = right[r];
                ret.push(node);
            }
        }
    }
    return ret;
};