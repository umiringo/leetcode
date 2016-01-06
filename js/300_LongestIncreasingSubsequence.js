/**
 * @param {number[]} nums
 * @return {number}
 */

 //n^2
var lengthOfLIS = function(nums) {
    if(nums.length < 1) return 0;
    var dp = [];
    dp[0] = 1;
    for(var i = 1; i < nums.length; ++i){
        var max = 1;
        for(var j = 0; j < i; ++j){
            if(nums[i] > nums[j]) max = Math.max(max, dp[j]+1);
        }
        dp[i] = max;
    }
    var ret = 0;
    for(var k in dp){
        ret = Math.max(ret,dp[k]);
    }
    return ret;
};

//nlogn
