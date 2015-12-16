/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
    var l = 0, h = nums.length-1;
    while( l < h ){
        var m = Math.floor( (l + h + 1)/2 );
        if(nums[m - 1] > nums[m]){
            h = m-1;
        }else{
            l = m;
        }
    }
    return l;
};