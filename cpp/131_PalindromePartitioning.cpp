class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ret;
        vector<string> path;
        backtrace(ret,path,0,s);
        return ret;
    }
    
private:
    void backtrace(vector<vector<string>>& ret, vector<string>& path, int index, string& s){
        if(index == s.length()){
            ret.push_back(path);
            return;
        }
        for(int i = index; i < s.length(); ++i){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                backtrace(ret,path,i+1,s);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int begin, int end){
        while(begin < end){
            if(s[begin] != s[end]) return false;
            begin++;
            end--;
        }
        return true;
    }
};