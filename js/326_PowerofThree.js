/**
 * @param {number} n
 * @return {boolean}
 */

 //迭代(not accept)
var isPowerOfThree = function(n) {
    if(n > 1){
        while(n % 3 === 0){
            n = Math.floor(n/3);
        }
    }
    return n === 1;
};
//递归
var isPowerOfThree = function(n) {
    if( n == 1) return true;
    if( n < 1 ) return false;
    return (n % 3 === 0 && isPowerOfThree(n/3));
};
//作弊
var isPowerOfThree = function(n) {
    return n > 0 && 1162261467 % n === 0;
};
//对数
var isPowerOfThree = function(n) {
    return n > 0 &&  (Math.log10(n) / Math.log10(3)) % 1 === 0; 
};