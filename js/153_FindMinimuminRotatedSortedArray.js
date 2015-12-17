/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
    var l = 0, h = nums.length-1;
    while(nums[l] > nums[h]){
        var m = Math.floor( (l+h)/2 );
        if(nums[l] <= nums[m]) l = m+1;
        else h = m;
    }
    return nums[l];
};