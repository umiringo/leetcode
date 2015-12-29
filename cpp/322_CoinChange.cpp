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

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        return binarySearchMatrix(matrix,0,0,matrix.size()-1,matrix[0].size()-1,target);
    }
private:
    bool binarySearchMatrix(vector<vector<int>>& matrix, int li, int lj, int hi, int hj, int target){
        if(li > hi && lj > hj) return false;
        int mi = (li + hi)/2;
        int mj = (lj + hj)/2;
        if(matrix[mi][mj] == target) return true;
        else if(matrix[mi][mj] > target){
            if(mj-1 < 0) return false;
            return binarySearchMatrix(matrix,li,lj,mi,mj-1,target) || binarySearchMatrix(matrix,mi,lj,mi,mj-1,target);
        }else{
            int ret1 = false,ret2= false;
            if(mj + 1 < matrix.size()){
                ret1 = binarySearchMatrix(matrix, li,mj+1,mi,hj,target);
            if(mi + 1 < martix.size()){
                ret2 = binarySearchMatrix(matrix,mi+1,lj,hi,hj,target);
            }
            return ret1 || ret2;
        }
        return false;
    }
};