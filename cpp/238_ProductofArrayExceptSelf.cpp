class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ret(len, 1);
        for(int i = 1; i < len; ++i){
            ret[i] = ret[i-1] * nums[i-1];
        }
        int temp = 1;
        for(int i = len-1; i >= 0; --i){
            ret[i] *= temp;
            temp *= nums[i];
        }
        return ret;
    }
};