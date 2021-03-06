/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsetsWithDup = function(nums) {
    nums.sort( function(a, b){ return a - b; });
    var ret = [];
    backtrace(ret, [], nums, 0);
    return ret;
};

var backtrace = function(ret, path, nums, index){
    ret.push(path.concat());
    for(var i = index; i < nums.length; ++i){
        if( i > index && nums[i] == nums[i-1] ) continue;
        path.push(nums[i]);
        backtrace(ret, path, nums,i+1);
        path.pop();
    }
};