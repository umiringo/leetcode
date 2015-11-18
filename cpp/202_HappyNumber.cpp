class Solution {
public:
    int sumofS(int n){
        int sum = 0;
        while( n > 0 ){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int p = sumofS(n);
        int q = sumofS(p);
        while( p != 1 ){
            if( p == q ) return false;
            p = sumofS(p);
            q = sumofS( sumofS(q) );
        }
        return true;
    }
};