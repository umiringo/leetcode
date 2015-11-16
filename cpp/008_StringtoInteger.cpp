class Solution {
public:
    int myAtoi(string str) {
        if( str.empty() ) return 0;
        int len = str.length();
        int i = 0;
        while( str[i] == ' ') ++i;
        int mark = 1;
        if( str[i] == '-' ){
            mark = -1;
            ++i;
        } else if( str[i] == '+' ){
            ++i;
        }
        long res = 0;
        while( i < len ){
            if( str[i] < 48 || str[i] > 57) return res*mark;
            res *= 10;
            res += str[i] - 48;
            if( res * mark > 2147483647 ) return 2147483647;
            if( res * mark < -2147483648 ) return -2147483648;
            ++i;
        }
        return res * mark;
    }
};