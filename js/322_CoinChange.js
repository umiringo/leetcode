/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function(coins, amount) {
    var dp = [];
    for(var n = 0; n < amount+1; ++n) dp.push(amount + 1);
    dp[0] = 0;
    for(var i = 0; i < amount+1; ++i){
        for(var j = 0; j < coins.length; ++j){
            if(coins[j] <= i && dp[i-coins[j]] + 1 < dp[i]){
                dp[i] = dp[i-coins[j]]+1;
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
};
