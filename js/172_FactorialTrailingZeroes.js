/**
 * @param {number} n
 * @return {number}
 */
var trailingZeroes = function(n) {
    var ret = 0;
    while( n > 0 ){
        n = Math.floor(n/5);
        ret += n;
    }
    return ret;
};