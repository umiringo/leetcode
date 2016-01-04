/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    var l = 0, h = nums.length-1;
    var ret = [-1,-1];
    while(l < h){
        var m = l + Math.floor((h-l)/2);
        if(nums[m] < target) l = m + 1;
        else h = m;
    }
    if(nums[l] == target) ret[0] = l;
    h = nums.length-1;
    while(l < h){
        m = l + Math.floor((h-l)/2) + 1;
        if(nums[m] > target) h = m - 1;
        else l = m;
    }
    if(nums[l] == target) ret[1] = l;
    return ret;
};