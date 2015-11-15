/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if(s.length != t.length) return false;
    var len = s.length;
    var hash = new Array(26);
    for( var i in s ){
        if(!hash[s[i]]) hash[s[i]] = 1;
        else hash[s[i]]++;
    }
    for( var j in t ){
        if( !hash[t[j]] || hash[t[j]] < 0) return false;
        else hash[t[j]]--;
    }
    return true;
};