/**
 * @param {string[]} words
 * @return {number}
 */
var maxProduct = function(words) {
    var size = words.length;
    var mark = [];
    var len = [];
    for(var n = 0; n < words.length; ++n){
        var m = 0;
        for(var k = 0; k < words[n].length; ++k){
            m |= (1 << (words[n][k].charCodeAt() - 97));
        }
        mark.push(m);
        len.push(words[n].length);
    }
    var ret = 0;
    for(var i = 0; i < size-1; ++i){
        for(var j = i+1; j < size; ++j){
            if((mark[i] & mark[j]) === 0){
                ret = Math.max(ret, len[i] * len[j]);
            } 
        }
    }
    return ret;
};