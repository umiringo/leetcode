/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */
var sortedArrayToBST = function(nums) {
    return buildTree(nums,0,nums.length-1);
};

var buildTree = function(nums, l, h){
    if( l > h ) return null;
    var m = Math.floor((l + h)/2);
    var node = new TreeNode(nums[m]);
    node.left = buildTree(nums,l,m-1);
    node.right = buildTree(nums,m+1,h);
    return node;
}