/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length === 0) return 0;
    var j = 0;
    for( var i = 0; i < nums.length; ++i){
        if(nums[i] !== nums[j]){
            nums[j+1] = nums[i];
            ++j;
        }
    }
    return j + 1;
};