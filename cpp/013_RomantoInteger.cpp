class Solution {
public:
    int ctoi( char c ){
        if( c == 'I' ) return 1;
        if( c == 'V' ) return 5;
        if( c == 'X' ) return 10;
        if( c == 'L' ) return 50;
        if( c == 'C' ) return 100;
        if( c == 'D' ) return 500;
        if( c == 'M' ) return 1000;
    }
    int romanToInt(string s) {
        int len = s.length();
        if(len <= 0) return 0;
        int i = 0;
        int res = 0;
        while( i < len ){
            int pre = ctoi(s[i]);
            int j = i + 1;
            if( j >= len ) return res+pre;
            if( pre < ctoi(s[j])) pre *= -1;
            res += pre;
            ++i;
        }
        return res;
    }
};