/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    var r = -1, w = -1, b = -1;
    for(var i in nums){
        if(nums[i] === 0){
            nums[++b] = 2;
            nums[++w] = 1;
            nums[++r] = 0;
        }else if(nums[i] === 1){
            nums[++b] = 2;
            nums[++w] = 1;
        }else if(nums[i] === 2){
            nums[++b] = 2;
        }
    }
};

//swap maybe not one pass
var sortColors = function(nums) {
    var red = 0, blue = nums.length-1;
    for(var i = 0; i <= blue; ++i){
        while(nums[i] === 2 && i < blue){
            var t = nums[i];
            nums[i] = nums[blue];
            nums[blue] = t;
            blue--;
        }
        while(nums[i] === 0 && i > red){
            var h = nums[i];
            nums[i] = nums[red];
            nums[red] = h;
            red++;
        }
    }
};
