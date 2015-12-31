/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function(citations) {
    if(citations.length < 1) return 0;
    var len = citations.length;
    var hash = [];
    for(var i = 0; i < len; ++i){
        hash.push(0);
    }
    for(var j = 0; j < len; ++j){
        if(citations[j] > len) hash[len-1]++;
        else hash[citations[j]-1]++;
    }
    var count = 0;
    for(var k = len; k > 0; --k){
        if(hash[k-1] + count >= k) return k;
        count += hash[k-1];
    }
    return 0;
};