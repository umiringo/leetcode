/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var len = s.length - 1;
    var count = 0;
    while(s[len] === ' ') --len;
    while(len >= 0 && s[len--] !== ' '){
        ++count;
    }
    return count;
};