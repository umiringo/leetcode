/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    var tail = nums.length - 1;
    for( var i = 0; i <= tail; ++i){
        if(nums[i] === val){
            nums[i] = nums[tail];
            --i;
            --tail;
        }
    }
    return tail + 1;
};