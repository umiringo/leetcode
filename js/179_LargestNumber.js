/**
 * @param {number[]} nums
 * @return {string}
 */
var largestNumber = function(nums) {
    var ret = "";
    var tmp = [];
    for(var i = 0; i < nums.length; ++i){
        tmp.push(nums[i].toString())
    }
    tmp.sort(function(a, b){
        return (a + b) > (b + a) ?  -1 : 1;
    });
    if(tmp[0] === "0") return "0";
    for(var j = 0; j < tmp.length; ++j){
        ret += tmp[j];
    }
    return ret;
};
