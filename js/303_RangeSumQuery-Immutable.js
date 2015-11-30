/**
 * @constructor
 * @param {number[]} nums
 */
var NumArray = function(nums) {
    this.sums = [];
    this.sums[0] = 0;
    for(var i=0; i<nums.length; ++i){
        this.sums[i+1] = this.sums[i] + nums[i];
    }
};

/**
 * @param {number} i
 * @param {number} j
 * @return {number}
 */
NumArray.prototype.sumRange = function(i, j) {
    return this.sums[j+1]-this.sums[i];
};


/**
 * Your NumArray object will be instantiated and called as such:
 * var numArray = new NumArray(nums);
 * numArray.sumRange(0, 1);
 * numArray.sumRange(0, 2);
 */