class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int j = 0,dup = 0;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] == nums[j] && dup < 1){
                nums[++j] = nums[i];
                dup++;
            }else if(nums[i] != nums[j]){
                nums[++j] = nums[i];
                dup = 0;
            }
        }
        return j+1;
    }
};