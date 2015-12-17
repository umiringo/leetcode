/**
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function(n) {
    var ret = [];
    genParenthesis(ret,"",n,n);
    return ret;
};

var genParenthesis = function(ret, sub, left, right){
    if(left === 0 && right === 0){
        ret.push(sub);
        return;
    }
    if(left > 0) genParenthesis(ret,sub+"(",left-1,right);
    if(left < right) genParenthesis(ret,sub+")",left,right-1);
}