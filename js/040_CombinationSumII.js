/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function(candidates, target) {
    candidates.sort( function(a, b) { return a-b; });
    var ret = [];
    backtrace(ret,[],candidates,target,0);
    return ret;
};

var backtrace = function(ret,path,candidates,target,start){
    if(target === 0){
        ret.push(path.concat());
        return;
    }
    if(target < 0) return;
    for(var i = start; i < candidates.length; ++i){
        if(i > start && candidates[i] === candidates[i-1]) continue;
        path.push(candidates[i]);
        backtrace(ret,path,candidates,target-candidates[i],i+1);
        path.pop();
    }
};