/**
 * @param {number} n
 * @param {number[]} primes
 * @return {number}
 */
var nthSuperUglyNumber = function(n, primes) {
    var len = primes.length;
    var mark = [];
    for(var m = 0; m < len; ++m){
        mark.push(0);
    }
    var dp = [];
    dp.push(1);
    for(var i = 1; i < n; ++i){
        var min = Number.MAX_SAFE_INTEGER;
        for(var j = 0; j < len; ++j){
            min = Math.min(min, dp[mark[j]]*primes[j]);
        }
        for(var k = 0; k < len; ++k){
            if(min == dp[mark[k]]*primes[k]) mark[k]++;
        }
        dp.push(min);
    }
    return dp[n-1];
};