/**
 * @param {number} num
 * @return {boolean}
 */
var isUgly = function(num) {
    if( num <= 0 ) return false;
    while( num % 2 === 0 && num > 0 ) num = Math.floor(num / 2);
    while( num % 3 === 0 && num > 0 ) num = Math.floor(num / 3);
    while( num % 5 === 0 && num > 0 ) num = Math.floor(num / 5);
    if( num === 1) return true;
    return false;
};