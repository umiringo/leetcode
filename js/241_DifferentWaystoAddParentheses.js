/**
 * @param {string} input
 * @return {number[]}
 */
var diffWaysToCompute = function(input) {
    var ret = [];
    for(var i = 0; i < input.length; ++i){
        var c = input[i];
        if(c === '+' || c === '-' || c === '*'){
            var left = diffWaysToCompute(input.substring(0,i));
            var right = diffWaysToCompute(input.substring(i+1));
            for(var m in left){
                for(var n in right){
                    ret.push(c === '+' ? left[m] + right[n] : c === '-' ? left[m] - right[n] : left[m] * right[n]);
                }
            }
        }
    }
    
    if(ret.length < 1 && input.length > 0){
        ret.push(Number.parseInt(input));
    }
    return ret;
};