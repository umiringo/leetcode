/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
    var diff = 0;
    for(var i in nums){
        diff ^= nums[i];
    }
    diff &= -diff;
    var ret = [0,0];
    for(var j in nums){
        if((nums[j] & diff) === 0) ret[0] ^= nums[j];
        else ret[1] ^= nums[j];
    }
    return ret;
};