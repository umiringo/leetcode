class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        if(grid[0].empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        int dp[m][n] = {};
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[i].size(); ++j){
                if( i == 0 && j == 0) dp[i][j] = grid[i][j];
                else if(i == 0 ) dp[i][j] = dp[i][j-1] + grid[i][j];
                else if(j == 0 ) dp[i][j] = dp[i-1][j] + grid[i][j];
                else dp[i][j] = std::min(dp[i][j-1] + grid[i][j], dp[i-1][j] + grid[i][j]);
            }
        }
        return dp[m-1][n-1];
    }
};