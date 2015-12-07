class Solution {
public:
    string countAndSay(int n) {
        string ret = "1";
        for(int i = 1; i < n; ++i){
            string tmp;
            for(int j = 0; j < ret.length(); ++j){
                int num = 1;
                while(j < ret.length() - 1 && ret[j] == ret[j+1]){
                    num++;
                    j++;
                } 
                tmp += std::to_string(num) + ret[j];
            }
            ret = tmp;
        }
        return ret;
    }
};