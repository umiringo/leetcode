class Solution {
public:
    int mySqrt(int x) {
        if( x == 0) return 0;
        int l = 1;
        int h = x;
        while(1){
            int m = l + (h-l)/2;
            if( m == x/m) return m;
            else if( m < x/m ){
                if(m+1 > x/(m+1)) return m;
                l = m+1;
            }else{
                h = m-1;
            }
        }
    }
};