class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        vector<vector<int>> ret;
        vector<int> path;
        backtrace(ret,path,candidates,target,0);
        return ret;
    }
private:
    void backtrace(vector<vector<int>>& ret, vector<int>& path, vector<int>& candidates, int target, int start){
        if(target == 0){
            ret.push_back(path);
            return;
        }
        if(target < 0) return;
        for(int i = start; i < candidates.size(); ++i){
            if(i > start && candidates[i] == candidates[i-1]) continue;
            path.push_back(candidates[i]);
            backtrace(ret,path,candidates,target-candidates[i],i+1);
            path.pop_back();
        }
    }
};