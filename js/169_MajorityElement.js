/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    if(nums.length < 2) return nums[0];
    nums.sort();
    return nums[Math.floor(nums.length/2)];
};


/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    var winner = 0, winnerCount = 0;
    for(var i in nums){
        if(winnerCount === 0){
            winner = nums[i];
            winnerCount++;
        }else if(winner == nums[i]){
            winnerCount++;
        }else{
            winnerCount--;
        }
    }
    return winner;
};