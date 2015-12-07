/**
 * @param {string} pattern
 * @param {string} str
 * @return {boolean}
 */
var wordPattern = function(pattern, str) {
    var pHash = {};
    var sHash = {};
    var sArray = str.split(' ');
    if(pattern.length != sArray.length) return false;
    for(var i in pattern){
        if( i >= sArray.length) return false;
        if(!pHash[pattern[i]]) pHash[pattern[i]] = i+1;
        if(!sHash[sArray[i]]) sHash[sArray[i]] = i+1;
        if(pHash[pattern[i]] != sHash[sArray[i]]) return false;
    }
    return true;
};