/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
	var j = 0;
	for( var i in nums ){
		if( nums[i] !== 0 ){
			var tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
			++j;
		}
	}
};