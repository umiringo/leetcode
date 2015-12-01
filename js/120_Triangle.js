/**
 * @param {number[][]} triangle
 * @return {number}
 */
var minimumTotal = function(triangle) {
    if(triangle.length === 0) return 0;
    var curPath = new Array(triangle.length);
    curPath = triangle[triangle.length - 1];
    for(var i = triangle.length - 2; i >= 0; --i){
        for(var j = 0; j < i+1; ++j){
            curPath[j] = Math.min(curPath[j], curPath[j+1]) + triangle[i][j];
        }
    }
    return curPath[0];
};