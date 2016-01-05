/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    var ret = [];
    candidates.sort(function(a,b){return a - b;});
    backtrack(ret,[],candidates,target,0);
    return ret;
};

var backtrack = function(ret, path, candidates, target,start){
    if(target === 0){
        ret.push(path.concat());
        return;
    }
    if(target < 0) return;
    for(var i = start; i < candidates.length; ++i){
        path.push(candidates[i]);
        backtrack(ret,path,candidates,target-candidates[i], i);
        path.pop();
    }
}