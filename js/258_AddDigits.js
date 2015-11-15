/**
 * @param {number} num
 * @return {number}
 */	
var addDigits = function(num) {
	if( num < 10 ) return num;
	var ret = num % 9;
	return ret === 0 ? 9 : ret;
};