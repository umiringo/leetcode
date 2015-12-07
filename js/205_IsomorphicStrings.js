va/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    var st_hash = {};
    var ts_hash = {};
    for(var i in s){
        if(!st_hash[s[i]]) st_hash[s[i]] = i+1;
        if(!ts_hash[t[i]]) ts_hash[t[i]] = i+1;
        if(st_hash[s[i]] !== ts_hash[t[i]]) return false;
    }
    return true;
};