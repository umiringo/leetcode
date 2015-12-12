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

 //recursive
var isSymmetric = function(root) {
    if(root === null) return true;
    return isMirror(root.left,root.right);
};

var isMirror = function(a,b){
    if(a === null && b === null) return true;
    else if(a === null || b === null) return false;
    else if(a.val != b.val) return false;
    return isMirror(a.left,b.right) && isMirror(a.right,b.left);
}

//iterative
var isSymmetric = function(root) {
    if(root === null) return true;
    var qLeft = [];
    var qRight = [];
    qLeft.push(root.left);
    qRight.push(root.right);
    while(qLeft.length > 0 && qRight.length > 0){
        var pLeft = qLeft.shift();
        var pRight = qRight.shift();
        if(pLeft === null && pRight === null) continue;
        else if(pLeft === null || pRight === null) return false;
        else if(pLeft.val != pRight.val) return false;
        qLeft.push(pLeft.left);
        qLeft.push(pLeft.right);
        qRight.push(pRight.right);
        qRight.push(pRight.left);
    }
    return true;
};