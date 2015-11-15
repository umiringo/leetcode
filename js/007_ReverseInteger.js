/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
	var mark = x > 0 ? 1 : -1;
	if( x < 0 ) x = -x;
	var ret = 0;
	while( x > 0){
		ret = ret*10 + x%10;
		x = Math.floor(x/10);
	}
	if(ret > 2147483647) return 0;
	return ret * mark;
};