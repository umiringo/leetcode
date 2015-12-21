class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> mark(primes.size(),0);
        int len = primes.size();
        vector<int> dp;
        for(int i = 0; i < n; ++i){
            if( i == 0){
                dp.push_back(1);
                continue;
            }
            int min = INT_MAX;
            for(int j = 0; j < len; ++j){
                min = std::min(dp[mark[j]] * primes[j], min);
            }
            for(int j = 0; j < len; ++j){
                if(min == dp[mark[j]] * primes[j]) mark[j]++;
            }
            dp.push_back(min);
        }
        return dp[n-1];
    }
};