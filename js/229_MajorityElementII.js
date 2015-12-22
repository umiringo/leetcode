/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
    var w1 = 0, wc1 = 0;
    var w2 = 0, wc2 = 0;
    for(var i in nums){
        var n = nums[i];
        if(n === w1) wc1++;
        else if(n === w2) wc2++;
        else if(wc1 === 0) w1 = n, wc1 = 1;
        else if(wc2 === 0) w2 = n, wc2 = 1;
        else wc1--,wc2--;
    }
    wc1 = 0,wc2 = 0;
    for(var j in nums){
        if(nums[j] === w1) wc1++;
        else if(nums[j] === w2) wc2++;
    }
    var ret = [];
    if(wc1 > nums.length / 3) ret.push(w1);
    if(wc2 > nums.length / 3) ret.push(w2);
    return ret;
};