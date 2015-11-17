/**
 * @param {string} s
 * @return {number}
 */
var ctoi = function(c){
	if( c === 'I' ) return 1;
	if( c === 'V' ) return 5;
	if( c === 'X' ) return 10;
	if( c === 'L' ) return 50;
	if( c === 'C' ) return 100;
	if( c === 'D' ) return 500;
	if( c === 'M' ) return 1000;
}

var romanToInt = function(s) {
	var len = s.length;
	if( len <= 0 ) return 0;
	var res = 0;
	for( var i = 0; i < len; ++i ){
		var pre = ctoi( s[i] );
		var j = i + 1;
		if( j >= len ) return res + pre;
		if( pre < ctoi(s[j]) ) pre *= -1;
		res += pre; 
	}
	return res;
};