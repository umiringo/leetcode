/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function(citations) {
    var len = citations.length;
    var l = 0, h = len-1;
    while(l <= h){
        var m = l + Math.floor((h -l)/2);
        if(citations[m] === len - m) return len - m;
        else if(citations[m] > len - m) h = m -1;
        else l = m +1;
    }
    return len - h - 1;
};