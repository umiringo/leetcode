//hash
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        vector<int> path;
        vector<int> hash(nums.size(), 0);
        backtrack(ret,path,nums,hash);
        return ret;
    }

private:
    void backtrack(vector<vector<int>>& ret, vector<int> path, vector<int>& nums,vector<int>& hash){
        if(path.size() == nums.size()) {
            ret.push_back(path);
            return;
        }
        
        for(int i = 0; i < nums.size(); ++i){
            if(hash[i] == 0){
                hash[i] = 1;
                path.push_back(nums[i]);
                backtrack(ret,path,nums,hash);
                path.pop_back();
                hash[i] = 0;
            }
        }
    }
};

//swap
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        backtrack(nums,0,ret);
        return ret;
    }
private:
    void backtrack(vector<int>& nums, int index, vector<vector<int>>& ret){
        if(index >= nums.size()){
            ret.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); ++i){
            swap(nums[index],nums[i]);
            backtrack(nums,index+1,ret);
            swap(nums[index],nums[i]);
        }
    }
};
