/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
	var hash = {};
	for( var i in nums ){
		if( hash[nums[i]] === 1 ){
			return true;
		} else {
			hash[nums[i]] = 1;
		}
	}
	return false;
};