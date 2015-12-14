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
var levelOrderBottom = function(root) {
    var ret = [];
    if(root === null) return [];
    var q = [];
    q.push(root);
    q.push(null);
    var index = 0;
    
    while(index < q.length){
        var t = q[index++];
        if( t === null ){
            if(index < q.length) q.push(null);
        }else{
            if(t.right) q.push(t.right);
            if(t.left) q.push(t.left);
        }
    }
    var cur = [];
    for(var i = q.length-1; i >= 0; --i){
        if(q[i] === null){
            if(cur.length){
                ret.push(cur);
                cur = [];
            }
        }else{
            cur.push(q[i].val)
        }
    }
    
    if(cur.length) ret.push(cur);
    return ret;
};