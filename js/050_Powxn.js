/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    if( x === 0 ) return 0;
    if( n === 0 ) return 1;
    if( n < 0 ){
        x = 1/x;
        n = -n;
    }
    var half = myPow(x, Math.floor(n/2));
    console.log(half);
    return n%2 ? half * half * x : half * half;
};