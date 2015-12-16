/**
 * @param {number} n
 * @return {number}
 */
var numTrees = function(n) {
    var dp = [];
    for(var k = 0; k <= n; ++k){
        dp.push(0);
    }
    dp[0] = 1;
    for(var i = 1; i <= n; ++i){
        for(var j = 0; j < i; ++j){
            dp[i] += dp[j] * dp[i-j-1];
        }
    }
    return dp[n];
};