class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        vector<int> path;
        backtrace(ret,path,nums,0);
        return ret;
    }   
    
private:
    void backtrace(vector<vector<int>>& ret, vector<int>& path, vector<int>& nums,int index){
        if(index == nums.size()){
            ret.push_back(path);
            return;
        }
        path.push_back(nums[index]);
        backtrace(ret,path,nums,index+1);
        path.pop_back();
        backtrace(ret,path,nums,index+1);
    }
};