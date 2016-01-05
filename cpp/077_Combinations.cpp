//two recursive
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ret;
        vector<int> path;
        backtrack(ret,path,1,n,k);
        return ret;
    }
private:
    void backtrack(vector<vector<int>>& ret, vector<int> path, int m, int n, int k){
        if(path.size() == k){
            ret.push_back(path);
            return;
        }
        if(m > n) return;
        path.push_back(m);
        backtrack(ret,path,m+1,n,k);
        path.pop_back();
        backtrack(ret,path,m+1,n,k);
    }
};

//one recursive
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ret;
        vector<int> path;
        backtrack(ret,path,1,n,k);
        return ret;
        
    }
private:
    void backtrack(vector<vector<int>>& ret, vector<int>& path, int index,int n, int k){
        if(path.size() == k){
            ret.push_back(path);
            return;
        }
        for(int i = index; i <= n; ++i){
            path.push_back(i);
            backtrack(ret,path,i+1,n,k);
            path.pop_back();
        }
    }
};