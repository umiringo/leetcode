/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
    var count = n*n;
    var ret = [];
    for(var p = 0; p < n; ++p){
        var t = [];
        for(var q = 0; q < n; ++q){
            t.push(0);
        }
        ret.push(t);
    }
    
    var left = 0, right = n-1;
    var up = 0, down = n-1;
    var num = 1;
    while(1){
        //to right
        if(num > count) break;
        for(var l = left; l <= right; ++l){
            ret[up][l] = num++;
        }
        up++;
        //to down
        if(num > count) break;
        for(var u = up; u <= down; ++u){
            ret[u][right] = num++;
        }
        right--;
        //to left
        if(num > count) break;
        for(var r = right; r >= left; --r){
            ret[down][r] = num++;
        }
        down--;
        //to up
        if(num > count) break;
        for(var d = down; d >= up; --d){
            ret[d][left] = num++;
        }
        left++;        
    }
    return ret;
};