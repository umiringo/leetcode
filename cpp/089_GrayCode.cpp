//Backtracking

//bit
class Solution {
public:
    vector<int> grayCode(int n) {
        int len = 1 << n;
        vector<int> ret;
        for(int i = 0; i < len; ++i){
            ret.push_back(i ^ (i >> 1));
        }
        return ret;
    }
};