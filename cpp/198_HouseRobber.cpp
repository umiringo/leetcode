class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int t[2];
        for(int i = 0; i < nums.size(); i++){
            if(i == 0) t[0] = nums[0];
            else if(i == 1) t[1] = std::max(nums[0], nums[1]);
            else t[i%2] = std::max( t[(i-2)%2] + nums[i], t[(i-1)%2]);
        }
        return t[(nums.size()-1)%2];
    }
};