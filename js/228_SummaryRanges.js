/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    var len = nums.length;
    var ret = [];
    for(var i = 0; i < len; ++i){
        var head = nums[i], offset = 0;
        while( i < len - 1 && nums[i+1] == nums[i]+1 ){
            ++offset, ++i;
        }
        if(offset > 0) ret.push( head.toString() + "->" + (head+offset).toString() );
        else ret.push( head.toString() );
    }
    return ret;
};