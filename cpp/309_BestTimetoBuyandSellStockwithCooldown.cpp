class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int buy = -prices[0];
        int sell = 0,pre_sell = 0;
        for(int i = 1; i < prices.size(); ++i){
            int pre_buy = buy;
            buy = std::max(pre_sell - prices[i], pre_buy);
            pre_sell = sell;
            sell = std::max(pre_buy + prices[i], pre_sell);
        }
        return sell;     
    }
};