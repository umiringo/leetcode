/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    if(prices.length < 2) return 0;
    var dp = [];
    var low = [];
    dp[0] = 0;
    low[0] = prices[0];
    for(var i = 1; i < prices.length; ++i){
        dp[i] = Math.max(prices[i] - low[i-1], dp[i-1]);
        low[i] = Math.min(prices[i], low[i-1]);
    }
    return dp[prices.length - 1];
};