class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(size_t i = 0; i < nums.size(); ++i){
            if( nums[i] != 0 ){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
            }
        }
    }
};