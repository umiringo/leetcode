class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {\
        if(amount == 0) return 0;
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        for(int i = 1; i < amount+1; ++i){
            for(int j = 0; j < coins.size(); ++j){
                if(coins[j] <= i && dp[i - coins[j]] + 1 < dp[i]){
                    dp[i] = dp[i - coins[j]] + 1;
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
    }
};