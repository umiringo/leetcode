class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ) return false;
        int h = 1;
        int l = 1;
        int t = x;
        while( t >= 10){
            t /= 10;
            h *= 10;
        }
        
        while(h > l){
            if((x/h)%10 != (x/l)%10) return false;
            h /= 10;
            l *= 10;
        }
        return true;
    }
};