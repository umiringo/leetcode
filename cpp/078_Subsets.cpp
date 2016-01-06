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
        ret.push_back(path);
        for(int i = index; i < nums.size(); ++i){
            path.push_back(nums[i]);
            backtrace(ret,path,nums,i+1);
            path.pop_back();
        }
    }
};