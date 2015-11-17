/**
 * @param {string} s
 * @return {number}
 */
var titleToNumber = function(s) {
    if( s.length === 0 ) return 0;
    var len = s.length;
    var codeA = 'A'.charCodeAt();
    var ret = 0;
    for( var i = 0; i < len; ++i ){
        ret = ret * 26 + (s[i].charCodeAt() - codeA + 1);
    }
    return ret;
};