class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> ret;
        for(int i = 0; i < input.length(); ++i){
            char c = input[i];
            if(c == '+' || c == '*' || c == '-'){
                vector<int> leftRet = diffWaysToCompute(input.substr(0,i));
                vector<int> rightRet = diffWaysToCompute(input.substr(i+1));
                for(auto a : leftRet){
                    for(auto b : rightRet){
                        ret.push_back( c == '+' ? a+b : c == '-' ? a-b : a*b);
                    }
                }
            }
        }
        if(ret.empty()){
            ret.push_back(std::stoi(input));
        }
        return ret;
    }
};