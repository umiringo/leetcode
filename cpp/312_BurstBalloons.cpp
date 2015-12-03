class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int tNums[nums.size() + 2];
        int n = 1;
        for(int x : nums){
            if(x>0){
                tNums[n++] = x;
            }
        }
        tNums[0] = tNums[n++] = 1;
        
        int dp[n][n] = {};
        for(int len = 3; len <= n; ++len){
            for(int left = 0; left <= n-len; ++left){
                int right = left + len -1;
                for(int i = left + 1; i < right; ++i){
                    dp[left][right] = std::max(dp[left][right], dp[left][i] + dp[i][right] + tNums[right]*tNums[i]*tNums[left]);
                }
            }
        }
        return dp[0][n-1];
    }
};