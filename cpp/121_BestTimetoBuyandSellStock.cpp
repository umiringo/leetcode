class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxPro = 0;
        int low = INT_MAX;
        for(int i = 0; i < len; ++i){
            low = std::min(prices[i] ,low);
            maxPro = std::max(prices[i] - low , maxPro);
        }
        return maxPro;
    }
};