/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if(nums.length < 1) return 0;
    var j = 0, dup = 0;
    for(var i = 1; i < nums.length; ++i){
        if(nums[i] == nums[j] && dup < 1){
            nums[++j] = nums[i];
            dup++;
        }else if(nums[i] != nums[j]){
            nums[++j] = nums[i];
            dup = 0;
        }
    }
    return j + 1;
};