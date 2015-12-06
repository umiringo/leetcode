class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::unordered_map<char,int> st_hash;
        std::unordered_map<char,int> ts_hash;
        
        for(int i = 0; i < s.size(); ++i){
            if(st_hash[s[i]] != ts_hash[t[i]]) return false;
            else st_hash[s[i]] = ts_hash[t[i]] = i+1;
        }
        return true;
    }
};