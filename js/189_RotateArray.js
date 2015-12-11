/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    var len = nums.length;
    var m = k % len;
    reverse(nums, 0, len-m-1);
    reverse(nums, len-m, len-1);
    reverse(nums, 0, len-1);
    
};

var reverse = function(nums, b, e){
    while(b < e){
        var tmp = nums[b];
        nums[b] = nums[e];
        nums[e] = tmp;
        ++b;
        --e;
    }
}