/**
 * @param {number} k
 * @param {number} n
 * @return {number[][]}
 */
var combinationSum3 = function(k, n) {
    var ret = [];
    backtrace(ret,[],1,n,k);
    return ret;
};

var backtrace = function(ret,path,start,n,k){
    if(n === 0 && path.length === k){
        ret.push(path.concat());
        return;
    }
    if(n < 0) return;
    for(var i = start; i <= 9; ++i){
        path.push(i);
        backtrace(ret,path,i+1,n-i,k);
        path.pop();
    }
}