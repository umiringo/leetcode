class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows <= 1) return s;
        if(s.length() <= 2) return s;
        string tmp[nRows];
        int i = 0;
        int len = s.length();
        int zag = nRows - 2;
        while( i < len ){
            for( int j = 0; i < len && j < nRows; ++j ){
                tmp[j] += s[i];
                ++i;
            }
            for( int k = zag; i < len && k > 0; --k){
                tmp[k] += s[i];
                ++i;
            }
        }
        string res;
        for( int i = 0; i < nRows; ++i){
            res += tmp[i];
        }
        return res;
    }
};