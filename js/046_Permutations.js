/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function(nums) {
    var ret = [];
    backtrack(nums,0,ret);
    return ret;
};

var swap = function(nums,i,j){
    var t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
}

var backtrack = function(nums, index, ret){
    if(index == nums.length){
        ret.push(nums.concat());
        return;
    }
    for(var i = index; i < nums.length; ++i){
        swap(nums,index,i);
        backtrack(nums,index+1,ret);
        swap(nums,index,i);
    }
}