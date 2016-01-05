/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */
var combine = function(n, k) {
    var ret = [];
    var path = [];
    backtrack(ret,path,1,n,k)
    return ret;
};

var backtrack = function(ret,path,index,n,k){
    if(path.length == k){
        ret.push(path.concat());
        return;
    }
    for(var i = index; i <= n; ++i){
        path.push(i);
        backtrack(ret,path,i + 1, n ,k);
        path.pop();
    }
}