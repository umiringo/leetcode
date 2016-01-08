 class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ret;
        vector<int> path;
        std::sort(candidates.begin(),candidates.end());
        backtrack(ret,path,candidates,target,0);
        return ret;
    }
private:
    void backtrack(vector<vector<int>>& ret, vector<int>& path,vector<int>& candidates, int target,int start){
        if(target == 0){         
            ret.push_back(path);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = start; i < candidates.size(); ++i){
            path.push_back(candidates[i]);
            backtrack(ret,path,candidates,target-candidates[i],i);
            path.pop_back();
        }
    }
};