/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    var reach = 0, index = 0;
    while(index < nums.length && index <= reach){
        reach = Math.max(reach, index + nums[index]);
        if(reach >= nums.length-1) return true;
        ++index;
    }
    return index == nums.length;
};