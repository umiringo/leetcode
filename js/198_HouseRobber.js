/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    if(nums.length === 0) return 0;
    var t = []
    for( var i = 0; i < nums.length; ++i){
        if(i === 0) t[0] = nums[0];
        else if(i === 1) t[1] = Math.max(nums[1], nums[0]);
        else t[i%2] = Math.max( t[(i-2)%2]+nums[i], t[(i-1)%2]);
    }
    return t[(nums.length-1)%2];
};