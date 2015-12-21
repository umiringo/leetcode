/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    var ret = [];
    if(matrix.length < 1) return ret;
    var left = 0; right = matrix[0].length-1;
    var up = 0, down = matrix.length-1;
    while(true){
        //to right
        if(left > right) break;
        for(var r = left; r <= right; ++r){
            ret.push(matrix[up][r]);
        }
        up++;
        //to down
        if(up > down) break;
        for(var d = up; d <= down; ++d){
            ret.push(matrix[d][right]);
        }
        right--;
        //to left
        if(left > right) break;
        for(var l = right; l >= left; --l){
            ret.push(matrix[down][l]);
        }
        down--;
        //to up
        if(up > down) break;
        for(var u = down; u >= up; --u){
            ret.push(matrix[u][left]);
        }
        left++;
    }
    return ret;
};