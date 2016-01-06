/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
    nums.sort( function(a, b){ return a - b; } );
    var ret = [];
    backtrace(ret,[],nums,0);
    return ret;
};

var backtrace = function(ret,path,nums,index){
    if(index == nums.length){
        ret.push(path.concat());
        return;
    }
    path.push(nums[index]);
    backtrace(ret,path,nums,index+1);
    path.pop();
    backtrace(ret,path,nums,index+1);
};