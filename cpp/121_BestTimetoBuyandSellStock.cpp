class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len < 2) return 0;
        vector<int> dp(len,0);
        vector<int> low(len,0);
        dp[0] = 0;
        low[0] = prices[0];
        for(int i = 1; i < len; ++i){
            dp[i] = std::max(prices[i] - low[i-1] , dp[i-1]);
            low[i] = std::min(prices[i] ,low[i-1]);
            std::cout <<"i:"<<i<< " d:" << dp[i]<<" l:"<<low[i]<<std::endl;
        }
        return dp[len-1];
    }
};