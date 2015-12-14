/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */

 //recursive
var levelOrder = function(root) {
    var ret = [];
    buildVector(root,0,ret);
    return ret;
};

var buildVector = function(root,depth,ret){
    if(root === null) return;
    if(depth === ret.length) ret.push([]);
    ret[depth].push(root.val);
    buildVector(root.left,depth+1,ret);
    buildVector(root.right,depth+1,ret);
};

//iterative
var levelOrder = function(root) {
    var ret = [];
    if(root === null) return ret;
    
    var queue = [];
    queue.push(root);
    queue.push(null);
    
    var cur = [];
    
    while(queue.length > 0){
        var t = queue.shift();
        if( t === null ){
            ret.push(cur);
            cur = [];
            if(queue.length) queue.push(null);
        }else{
            cur.push(t.val);
            if(t.left !== null) queue.push(t.left);
            if(t.right !== null) queue.push(t.right);
        }
    }
    return ret;
};
