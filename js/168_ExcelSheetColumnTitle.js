/**
 * @param {number} n
 * @return {string}
 */
var convertToTitle = function(n) {
    var ret = "";
    var codeA = 'A'.charCodeAt(0);
    while( n > 0 ){
        var i = n % 26 ? n%26 : 26;
        if( i === 26) --n;
        ret = String.fromCharCode(codeA + i - 1) + ret;
        n = Math.floor( n/26 );
    }
    return ret;
};