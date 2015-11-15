class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int len = s.length();
        int hash[26];
        memset(hash, 0, sizeof(int)*26);
        for( int i = 0; i < len; ++i ){
            hash[s[i] - 'a']++;
        }
        for( int i = 0; i < len; ++i ){
            if( --hash[t[i] - 'a'] < 0 ){
                return false;
            } 
        }
        return true;
    }
};