/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if( x < 0 ) return false;
    var h = 1;
    var l = 1;
    var t = x;
    while( t >= 10 ){
    	t = Math.floor( t/ 10);
    	h *= 10;
    }

    while( h > l ){
    	if( Math.floor(x/h)%10 != Math.floor(x/l)%10){
    		return false;
    	}
    	h = Math.floor( h/10 );
    	l *= 10;
    }
    return true;
};