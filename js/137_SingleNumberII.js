/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    var ones = 0, twos = 0;
    for(var i in nums){
        ones = ones ^ nums[i] & ~twos;
        twos = twos ^ nums[i] & ~ones;
    }
    return ones | twos;
};