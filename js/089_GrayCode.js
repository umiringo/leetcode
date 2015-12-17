//Backtracking

//bit
/**
 * @param {number} n
 * @return {number[]}
 */
var grayCode = function(n) {
    var len = 1 << n;
    var ret = [];
    for(var i = 0; i < len; ++i){
        ret.push( i ^ (i >> 1));
    }
    return ret;
};