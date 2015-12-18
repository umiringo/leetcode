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

//clear
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.empty()) return prefix;
       
        int index = 0;
        while(index < strs[0].size()){
            for(int i = 1; i < strs.size(); ++i){
                if(index > strs[i].size() || strs[i][index] != strs[0][index] ) return prefix;
            }
            prefix += strs[0][index];
            index++;
        }
        return prefix;
    }
};