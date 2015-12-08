/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    var prefix = "";
    if(strs.length === 0) return prefix;
    prefix = strs[0];
    for(var i = 1; i < strs.length; ++i){
        var temp = "";
        for(var j = 0; j < strs[i].length; ++j){
            if(prefix[j] != strs[i][j]) break;
            else temp += prefix[j];
        }
        if(temp.length === 0) return temp;
        prefix = temp;
    }
    return prefix;
};