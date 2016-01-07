class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        backtrack(nums,0,ret);
        return ret;
    }
    
private:
    void backtrack(vector<int> nums, int index, vector<vector<int>>& ret){
        if(index == nums.size()-1){
            ret.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); ++i){
            if(index != i && nums[index] == nums[i]) continue;
            swap(nums[index],nums[i]);
            backtrack(nums,index+1,ret);
        }
    }
};