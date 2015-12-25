/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    if(matrix.length < 1 || matrix[0].length < 1) return;
    var rows = matrix.length , cols = matrix[0].length;
    var col = 1;
    for(var i = 0; i < rows; ++i){
        if(matrix[i][0] === 0) col = 0;
        for(var j = 1; j < cols; ++j){
            if(matrix[i][j] === 0) matrix[i][0] = matrix[0][j] = 0; 
        }
    }
    for(var m = rows-1; m >= 0; --m){
        for(var n = cols-1; n >= 1; --n){
            if(matrix[m][0] === 0 || matrix[0][n] === 0) matrix[m][n] = 0;
        }
        if(col === 0) matrix[m][0] = 0;
    }
};