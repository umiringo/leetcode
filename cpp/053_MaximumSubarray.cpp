//dp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int dp = nums[0];
        int max = dp;
        for(int i=1; i < nums.size(); ++i){
            dp = std::max(dp + nums[i], nums[i]);
            max = std::max(dp,max);
        }
        return max;
    }
};