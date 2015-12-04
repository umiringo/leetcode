/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    var hash = {};
    for(var i in nums){
        if(hash[nums[i]]  && i - hash[nums[i]] <= k) return true;
        else hash[nums[i]] = i;
    }
    return false;
};