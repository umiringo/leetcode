class Solution {
public:
    string convertToTitle(int n) {whi
        string ret;
        while ( n > 0 ){
            int i = n % 26 ? n%26 : 26;
            if( i == 26) --n;
            ret = (char)('A' + i - 1) + ret;
            n /= 26;
        }
        return ret;
    }
};