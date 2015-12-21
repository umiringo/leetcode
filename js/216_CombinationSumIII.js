//log(mn)
/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    if(matrix.length < 1) return false;
    var m = matrix.length;
    var n = matrix[0].length;
    var l = 0, h = m*n-1;
    while(l <= h){
        var mid = (l+h) >> 1;
        var v = matrix[Math.floor(mid/n)][Math.floor(mid%n)];
        if( v === target ) return true;
        else if( v < target ) l = mid + 1;
        else h = mid - 1;
    }
    return false;
};