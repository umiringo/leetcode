/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var ret = [];
    var hash = {};
    for( var i = 0; i < nums.length; ++i ){
        if(hash[target - nums[i]]){
            ret.push(hash[target - nums[i]]);
            ret.push(i + 1);
            return ret;
        } 
        hash[nums[i]] = i + 1;
    }
    return ret;
};