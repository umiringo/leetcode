/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function(str) {
    if( str.length === 0 ) return 0;
    var len = str.length;
    var i = 0;
    while( str[i] === ' ' ) ++i;
    var mark = 1;
    if( str[i] === '-' ){
        mark = -1;
        ++i;
    } else if( str[i] === '+' ){
        ++i;
    }
    var res = 0;
    while( i < len ){
        if(isNaN(parseInt(str[i]))) return res*mark;
        res *= 10;
        res += parseInt(str[i], 0);
        if( res * mark > 2147483647) return 2147483647;
        if( res * mark < -2147483648 ) return -2147483648;
        ++i;
    }
    return res * mark;
};