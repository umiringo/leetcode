/**
 * @param {number} n
 * @return {number}
 */
var numSquares = function(n) {
    if(n === 0) return 0;
    var dp = [];
    for(var k = 0; k <= n; k++) dp.push(n+1);
    dp[0] = 0;
    
    for(var i = 1; i <= n; ++i){
        for(var j = 0; j*j <= i; j++){
            if(dp[i-j*j] + 1 < dp[i]) dp[i] = dp[i-j*j] + 1;
        }
    }
    return dp[n];
};