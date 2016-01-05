class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ret;
        vector<int> path;
        backtrack(ret,path,1,n,k);
        return ret;
    }

private:
    void backtrack(vector<vector<int>>& ret, vector<int>& path, int start,int n, int k){
        if(n == 0 && path.size() == k){
            ret.push_back(path);
            return;
        }
        if(n < 0) return;
        for(int i = start; i <= 9; ++i){
            path.push_back(i);
            backtrack(ret,path,i+1,n-i,k);
            path.pop_back();
        }
    }
};