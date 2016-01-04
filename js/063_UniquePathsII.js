/**
 * @param {number[][]} obstacleGrid
 * @return {number}
 */
var uniquePathsWithObstacles = function(obstacleGrid) {
    if(obstacleGrid.length < 1 || obstacleGrid.length < 1) return 0;
    var m = obstacleGrid.length, n = obstacleGrid[0].length;
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
            if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
            else if( i === 0 && j === 0) dp[i][j] = 1;
            else if( i === 0 ) dp[i][j] = dp[i][j-1];
            else if( j === 0 ) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
};