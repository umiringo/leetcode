/**
 * @param {number} n
 * @return {number}
 */
var nthUglyNumber = function(n) {
    var dp = [];
    var m2 = 0, m3 = 0 , m5 = 0;
    for(var i = 0; i < n; ++i){
        if( i === 0 ){
            dp.push(1);
            continue;
        }
        var m = Math.min(dp[m2] * 2, Math.min(dp[m3] * 3, dp[m5] * 5));
        if(m === dp[m2] * 2) ++m2;
        if(m === dp[m3] * 3) ++m3;
        if(m === dp[m5] * 5) ++m5;
        dp.push(m);
    }
    return dp[n-1];
};