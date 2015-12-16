class Solution {
public:
    int numTrees(int n) {
       int dp[2] = {1,2};
       for(int i = 3; i <= n; ++i){
           dp[i % 3] = dp[(i-1) % 3] * 2 + dp[(i-2) % 3];
       }
       return dp[n % 3];
    }
};