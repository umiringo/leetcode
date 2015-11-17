class Solution {
public:
    int titleToNumber(string s) {
        if( s.empty() ) return 0;
        int len = s.length();
        int ret = 0;
        for( int i = 0; i < len; ++i ){
            ret = ret * 26 + (s[i] - 'A' + 1);
        }
        return ret;
    }
};