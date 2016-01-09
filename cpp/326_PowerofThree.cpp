//迭代(not accept)
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n > 1){
            while(n % 3 == 0){
                n /= 3;
            }
        }
        return n == 1;
    }
};
//递归
class Solution {
public:
    bool isPowerOfThree(int n) {
        if( n == 1) return true;
        if( n < 1) return false;
        return (n % 3 == 0 && isPowerOfThree(n/3));
    }
};
//作弊
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};
//对数
class Solution {
public:
    bool isPowerOfThree(int n) {
        std::cout<< log10(n)/log10(3) << std::endl;
        return n >= 1 && n == pow(3, (int)(log10(n)/log10(3)));
    }
};  