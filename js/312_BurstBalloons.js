/**
 * @param {number[]} nums
 * @return {number}
 */
var maxCoins = function(nums) {
    //remove zero
    var tNums = new Array(nums.length + 2);
    var n = 1;
    for(var x in nums){
        if(nums[x] > 0){
            tNums[n++] = nums[x];
        }
    }
    tNums[0] = tNums[n++] = 1;
    var dp = [];
    for(var i=0; i<n; ++i){
        dp[i] = [];
        for(var j=0; j<n; ++j){
            dp[i][j] = 0;
        }
    }
    
    for(var len=3; len<=n; ++len){
        for(var left=0; left<=n-len; ++left){
            var right = left+len-1;
            for(var k=left+1; k<right; ++k){
                dp[left][right] = Math.max(dp[left][right], dp[k][right]+dp[left][k]+tNums[left]*tNums[right]*tNums[k]);
            }
        }
    }
    return dp[0][n-1];
};