class Solution {
public:
    int reverse(int x) {
        int mark = x > 0 ? 1 : -1;
        if( x < 0 ) x = -x;
        long ret = 0;
        while( x > 0){
            ret = ret * 10 + x % 10;
            x /= 10;
        }
        if(ret > INT_MAX) return 0;
        return ret * mark;
    }
};