/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    var ret = [];
    var len = nums.length;
    for(var n = 0; n < len; ++n){
        ret.push(1);
    }
    
    for(var i = 1; i < len; ++i){
        ret[i] = ret[i-1] * nums[i-1];
    }
    var temp = 1;
    for(var j = len-1; j >= 0; --j){
        ret[j] *= temp;
        temp *= nums[j];
    }
    return ret;
};