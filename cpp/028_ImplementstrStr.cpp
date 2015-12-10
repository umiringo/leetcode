//kmp
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        int hLen = haystack.length();
        int nLen = needle.length();
        vector<int> next(nLen, -1);
        genNext(needle, next);
        while( i < hLen && j < nLen ){
            if( j == -1 || haystack[i] == needle[j]){
                ++i, ++j;
            }else{
                j = next[j];
            }
        }
        if( j == nLen ) return i-j;
        else return -1;
    }
private:
    void genNext(string needle, vector<int>& next){
        int nLen = needle.length();
        int k = -1, i = 0;
        while( i < nLen - 1){
            if( k == -1 || needle[i] == needle[k] ){
                ++k, ++i;
                next[i] = k;
            }else {
                k = next[k];
            }
        }
        
    }
};