//n^2
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()] = {};
        dp[0] = 1;
        for(int i = 1; i < nums.size(); ++i){
            int max = 1;
            for(int j = 0; j < i; ++j){
                if(nums[i] > nums[j]){
                    max = std::max(max, dp[j] + 1);
                }
            }
            dp[i] = max;
        }
        int ret = 0;
        for(int i = 0; i < nums.size(); ++i){
            ret = std::max(ret, dp[i]);
        }
        return ret;
    }
};

//nlogn
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        for(auto i : nums){
            auto it = std::lower_bound(dp.begin(),dp.end(),i);
            if(it == dp.end()) dp.push_back(i);
            else *it = i;
        }
        return dp.size();
    }
};