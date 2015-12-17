/**
 * @param {number[]} nums
 * @return {number}
 */

//dp
var maxSubArray = function(nums) {
    if(nums.length < 1) return 0;
    var dp = nums[0];
    var max = dp;
    for(var i = 1; i < nums.length; ++i){
        dp = (Math.max(dp + nums[i], nums[i]));
        max = Math.max(max, dp);
    }
    return max;
};

//dc
