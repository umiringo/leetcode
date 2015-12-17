/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function(m, n) {
    var dp = [];
    for(var p = 0; p < m; ++p){
        var t = [];
        for(var q = 0; q < n; ++q){
            t.push(0);
        }
        dp.push(t);
    }
    
    for(var i = 0; i < m; ++i){
        for(var j = 0; j < n; ++j){
            if( i === 0 || j === 0) dp[i][j] = 1;
            else dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    return dp[m-1][n-1];
};