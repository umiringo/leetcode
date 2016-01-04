class Solution {
public:
    int numSquares(int n) {
        if(n == 0) return 0;
        vector<int> dp(n + 1, n + 1);
        dp[0] = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = 0; j * j <= i; ++j){
                if(dp[ i - j*j] + 1 < dp[i]) dp[i] = dp[i-j*j] + 1;
            }
        }
        return dp[n];
    }
};