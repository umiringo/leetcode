/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permuteUnique = function(nums) {
    nums.sort( function(a,b){return a-b;} );
    var ret = [];
    backtrace(nums.concat(),0,ret);
    return ret;
};

var swap = function(nums,i,j){
    var t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
};

var backtrace = function(nums, index, ret){
    if(index == nums.length - 1 ){
        ret.push(nums.concat());
        return;
    }
    for(var i = index; i < nums.length; ++i){
        if(i > index && nums[i] === nums[index]) continue;
        swap(nums,index,i);
        backtrace(nums.concat(),index+1,ret);
    }
};