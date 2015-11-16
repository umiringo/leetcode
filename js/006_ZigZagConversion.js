/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if( numRows <= 1 ) return s;
    if( s.length <= 2 ) return s;
    var tmp = new Array(numRows);
    var i = 0;
    var len = s.length;
    var zag = numRows - 2;
    for( var n = 0; n < len; ++n){
        tmp[n] = "";
    }
    while( i < len ){
        for( var j = 0; i < len && j < numRows; ++j ){
            tmp[j] += s[i];
            ++i;
        }
        for( var k = zag; i < len && k > 0; --k ){
            tmp[k] += s[i];
            ++i;
        }
    }
    var res = "";
    for( var c in tmp){
        res += tmp[c];
    }
    return res;
};