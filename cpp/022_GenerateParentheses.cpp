class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        genParenthesis(ret,"",n,n);
        return ret;
    }
    
private:
    void genParenthesis(vector<string>& ret, string sub, int left, int right){
        if(left == 0 && right == 0){
            ret.push_back(sub);
            return;
        }
        if(left > 0) genParenthesis(ret, sub+'(',left-1,right);
        if(left < right) genParenthesis(ret,sub+')',left,right-1);

    }
};