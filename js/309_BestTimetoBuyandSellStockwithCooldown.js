/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    if(prices.length < 1) return 0;
    var buy = -prices[0];
    var sell = 0, preSell = 0;
    for(var i = 1; i < prices.length; ++i){
        var preBuy = buy;
        buy = Math.max(preSell - prices[i], preBuy);
        preSell = sell;
        sell = Math.max(preBuy+ prices[i], preSell);
    }
    return sell;
};