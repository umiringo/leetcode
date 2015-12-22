/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
    var l = 1, h = nums.length-1;
    while(l < h){
        var m = l + Math.floor( (h-l)/2 );
        var less = 0;
        for(var i in nums){
            if(nums[i] <= m) ++less;
        }
        if(less <= m) l = m+1;
        else h = m;
    }
    return l;
};