class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = nums.size()-1;
        while(index > 0){
            if(nums[index] > nums[index-1]) break;
            index--;
        }
        if(index == 0){
            std::reverse(nums.begin(), nums.end());
            return;
        }
        int k = nums.size()-1;
        while(k >= index){
            if(nums[k] > nums[index-1]) break;
            k--;
        }
        std::swap(nums[k],nums[index-1]);
        std::reverse(nums.begin() + index, nums.end());
    }
};