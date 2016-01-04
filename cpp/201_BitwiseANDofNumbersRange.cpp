class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m == 0) return 0;
        int mark = 1;
        
        while(m != n){
            m >>= 1;
            n >>= 1;
            mark <<= 1;
        }
        return mark * m;
    }
};

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        return m != n ? rangeBitwiseAnd(m >> 1, n >> 1) * 2 : n;
    }
};