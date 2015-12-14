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
 
//DFS
var minDepth = function(root) {
    if(root === null) return 0;
    if(root.left === null) return minDepth(root.right) + 1;
    if(root.right === null) return minDepth(root.left) + 1;
    return Math.min(minDepth(root.right), minDepth(root.left)) + 1;
};

//BFS
var minDepth = function(root) {
    var depth = 0;
    if( root === null ) return depth;
    var q = [];
    q.push(root);
    q.push(null);
    while(q.length){
        var t = q.shift();
        if(t === null){
            depth++;
            if(q.length) q.push(null);
        }else{
            if(!t.left && !t.right) return depth + 1;
            if(t.left) q.push(t.left);
            if(t.right) q.push(t.right);
        }
    }
    return depth;
};