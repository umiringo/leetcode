class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        vector<int> path;
        backtrace(ret,path,nums,0);
        return ret;
    }
    
private:
    void backtrace(vector<vector<int>>& ret, vector<int>& path, vector<int>& nums, int index){
        ret.push_back(path);
        for(int i = index; i < nums.size(); ++i){
            if(i > index && nums[i] == nums[i-1]) continue;
            path.push_back(nums[i]);
            backtrace(ret,path,nums,i+1);
            path.pop_back();
        }
    }
};