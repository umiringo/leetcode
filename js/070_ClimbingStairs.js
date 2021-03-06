/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var temp = [];
    for( var i = 0; i < n; ++i){
        if(i === 0) temp[i%2] = 1;
        else if( i === 1) temp[i%2] = 2;
        else temp[i%2] = temp[(i-1)%2] + temp[(i-2)%2];
    }
    return temp[(n-1)%2];
};