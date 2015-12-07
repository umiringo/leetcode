/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function(n) {
    var ret = "1";
    for(var i = 1; i < n; ++i){
        var tmp = "";
        for(var j = 0; j < ret.length; ++j){
            var num = 1;
            while( j < ret.length - 1 && ret[j] === ret[j+1]){
                ++num;
                ++j;
            }
            tmp += num.toString() + ret[j];
        }
        ret = tmp;
    }
    return ret;
};