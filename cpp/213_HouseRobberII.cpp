class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() < 2) return nums[0];
        return std::max(robHelper(nums,0,nums.size()-2),robHelper(nums,1,nums.size()-1));

    }
private:
    int robHelper(vector<int>& nums, int b, int e){
        int cur = 0, pre = 0;
        for(int i = b; i <= e; ++i){
            int t = max(pre + nums[i], cur);
            pre = cur;
            cur = t;
        }
        return cur;
    }
};