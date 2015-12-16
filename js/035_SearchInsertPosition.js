/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    var len = nums.length;
    var l = 0, h = len-1, pos = 0;
    while(l <= h){
        var m = l + Math.floor( (h-l)/2 );
        if(nums[m] == target) return m;
        if(nums[m] < target){
            l = m+1;
            pos = l;
        }else{
            h = m-1;
            pos = h+1;
        }
    }
    return pos;
};