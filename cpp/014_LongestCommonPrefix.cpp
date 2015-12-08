class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string cPrefix = strs[0];
        for(int i = 1; i < strs.size(); ++i){
            if(cPrefix.empty()) return "";
            string temp;
            for(int j = 0; j < strs[i].size(); ++j){
                if(cPrefix[j] != strs[i][j]) break;
                else temp += cPrefix[j];
            }
            cPrefix = temp;
        }
        return cPrefix;
    }
};