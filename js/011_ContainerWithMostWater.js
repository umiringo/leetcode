/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    var left = 0;
    var right = height.length-1;
    var max = 0;
    while(left < right){
        var h = Math.min(height[left], height[right]);
        max = Math.max(max, h * (right-left));
        while(height[left] <= h && left < right) left++;
        while(height[right] <= h && left < right) right--;
    }
    return max;
};