class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp;
        int m2 = 0, m3 = 0, m5 = 0;
        for(int i = 0; i < n; ++i){
            if(i == 0) dp.push_back(1);
            else{
                int m = dp[m2] * 2;
                if(m > dp[m3] * 3) m = dp[m3] * 3;
                if(m > dp[m5] * 5) m = dp[m5] * 5;
                if(m == dp[m2] * 2) ++m2;
                if(m == dp[m3] * 3) ++m3;
                if(m == dp[m5] * 5) ++m5;
                dp.push_back(m);
            }
        }
        return dp[n-1];
    }
};