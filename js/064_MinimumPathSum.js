/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function(grid) {
    if(grid.length < 1) return 0;
    if(grid[0].length < 1) return 0;
    var m = grid.length, n = grid[0].length;
    var dp = grid.concat();
    for(var i = 0; i < m; ++i){
        for(var j = 0; j < n; ++j){
            if( i === 0 && j === 0) continue;
            else if( i === 0) dp[i][j] += dp[i][j-1];
            else if( j === 0) dp[i][j] += dp[i-1][j];
            else dp[i][j] = Math.min(dp[i][j-1] + dp[i][j], dp[i-1][j] + dp[i][j]);
        }
    }
    console.log(dp);
    return dp[m-1][n-1];
};