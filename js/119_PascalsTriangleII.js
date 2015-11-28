/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    var t = Array.apply(null, Array(rowIndex+1)).map(function(){return 0;});
    t[0] = 1;
    for(var i = 1; i <= rowIndex; i++){
        for(var j = i; j > 0; --j){
            t[j] += t[j-1];
        }
    }
    return t;
};