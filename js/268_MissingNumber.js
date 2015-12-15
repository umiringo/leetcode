/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var bit = nums.length;
    var i = 0;
    for(var j in nums){
        bit ^= nums[j];
        bit ^= i++;
    }
    return bit;
};