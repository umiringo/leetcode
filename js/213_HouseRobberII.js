/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    var n = nums.length;
    if(n < 2) return n > 0 ? nums[0] : 0;
    return Math.max(robHelper(nums,0,n-2), robHelper(nums,1,n-1));
};

var robHelper = function(nums,b,e){
    var cur = 0, pre = 0;
    for(var i = b; i <= e; ++i){
        var t = Math.max(pre + nums[i], cur);
        pre = cur;
        cur = t;
    }
    return cur;
}