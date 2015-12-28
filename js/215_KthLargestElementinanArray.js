/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function(nums, k) {
    return randomSelect(nums,0,nums.length-1,k);
};

var partition = function(nums,b,e){
    var x = nums[b];
    var i = b;
    for(var j = i+1; j <= e; ++j){
        if(nums[j] > x){
            var t = nums[++i];
            nums[i] = nums[j];
            nums[j] = t;
        }
    }
    var y = nums[i];
    nums[i] = nums[b];
    nums[b] = y;
    return i;
}

var randomSelect = function(nums,b,e,i){
    if(b === e) return nums[b];
    var m = partition(nums,b,e);
    var k = m - b + 1;
    if(k === i) return nums[m];
    else if( i < k) return randomSelect(nums,b,m-1,i);
    else return randomSelect(nums,m+1,e,i-k);
}