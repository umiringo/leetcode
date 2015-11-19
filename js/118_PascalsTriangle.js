/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    var ret = [];
    for(var i = 0; i< numRows; ++i){
        ret[i] = [];
        for( var j = 0; j <= i; j++){
            if(j === 0 || j === i){
                ret[i][j] = 1;
            }else{
                ret[i][j] = ret[i-1][j-1] + ret[i-1][j]; 
            }
        }
    }
    return ret;
};