/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    for(var i = 0, j = s.length-1; i < j; ++i,--j){
        while( i < j && isAlNum(s[i]) === false) ++i;
        while( i < j && isAlNum(s[j]) === false) --j;
        if(s[i].toUpperCase() !== s[j].toUpperCase()) return false;
    }
    return true;
};

var isAlNum = function checknum(value) {
        var Regx = /^[A-Za-z0-9]*$/;
        if (Regx.test(value)) return true;
        return false;
}