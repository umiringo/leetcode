/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    var ret = nums[0];
    for(var i = 1; i < nums.length; ++i){
        ret ^= nums[i];
    }
    return ret;
};