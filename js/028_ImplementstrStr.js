//kmp
/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    var i = 0, j = 0;
    var hLen = haystack.length;
    var nLen = needle.length;
    var next = genNext(needle)
    console.log(next);
    while(i < hLen && j < nLen){
        if( j == -1 || haystack[i] == needle[j] ){
            ++i;
            ++j;
        }else{
            j = next[j];
        }
    }
    if( j === nLen ) return i-j;
    else return -1;
    
};

var genNext = function(needle) {
    var nLen = needle.length;
    var next = new Array(nLen);
    for(var j = 0; j < nLen; j++){
        next[j] = -1;
    }
    var k = -1, i = 0;
    while( i < nLen - 1){
        if(k == -1 || needle[i] == needle[k]){
            ++k;
            ++i;
            next[i] = k;
        }else{
            k = next[k];
        }
    }
    return next;
}