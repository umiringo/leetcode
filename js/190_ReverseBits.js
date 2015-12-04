/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function(n) {
    var ret = 0;
    for(var i = 0; i < 32; ++i){
        ret = (ret << 1) + (n >> i & 1);
    }
    return ret >>> 0;
};