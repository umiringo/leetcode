/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var maxPro = 0;
    var low = Number.MAX_SAFE_INTEGER;
    for(var i = 0; i < prices.length; ++i){
        low = Math.min(prices[i], low);
        maxPro = Math.max(prices[i] - low, maxPro);
    }
    return maxPro;
};