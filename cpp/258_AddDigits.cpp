class Solution {
public:
    int addDigits(int num) {
        if ( num < 10 ) return num;
        int ret = num % 9;
        return ret == 0 ? 9 : ret;
    }
};