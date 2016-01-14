/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(nums) {
    var index = nums.length - 1;
    while(index > 0){
        if(nums[index] > nums[index-1]) break;
        index--;
    }
    if(index === 0){
        nums.reverse();
        return;
    }
    var k = nums.length-1;
    while( k >= index){
        if(nums[k] > nums[index - 1]) break;
        k--;
    }
    
    swap(k, index-1);
    reverse(index, nums.length-1);
    return;
    
    function reverse(s, e){
        while(s < e){
            swap(s, e);
            s++;
            e--;
        }
    }
    function swap(a, b){
        var t = nums[a];
        nums[a] = nums[b];
        nums[b] = t;
    }
};