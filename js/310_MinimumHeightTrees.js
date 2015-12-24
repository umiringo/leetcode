/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {number[]}
 */
var findMinHeightTrees = function(n, edges) {
    var count = n;
    var mark = [];
    for(var m = 0; m < n-1; m++){
        mark[m] = 0;
    }
    var degree = [];
    for(var d = 0; d < n; d++){
        degree[d] = 1;
    }
    
    while(count > 2){
        for(var i = 0; i < n; ++i){
            degree[i] = 0;
        }
        for(var j = 0; j < edges.length; ++j){
            if(mark[j] == 1) continue;
            degree[edges[j][0]]++;
            degree[edges[j][1]]++;
        }
        for(var k = 0; k < edges.length; ++k){
            var x = edges[k][0], y = edges[k][1];
            if(mark[k] == 1) continue;
            if(degree[x] == 1){
                degree[x] = 0;
                count--;
                mark[k] = 1;
            }
            if(degree[y] == 1){
                degree[y] = 0;
                count--;
                mark[k] = 1;
            }
        }
    }
    var ret = [];
    for(var q = 0; q < n; ++q){
        if(degree[q] > 0) ret.push(q);
    }
    return ret;
};