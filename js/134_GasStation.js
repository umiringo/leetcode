/**
 * @param {number[]} gas
 * @param {number[]} cost
 * @return {number}
 */
var canCompleteCircuit = function(gas, cost) {
    var start = 0;
    var total = 0;
    var remain = 0;
    for(var i = 0; i < gas.length; ++i){
        remain = remain + gas[i] - cost[i];
        if(remain < 0){
            start = i+1;
            total += remain;
            remain = 0;
        }
    }
    return total+remain < 0 ? -1 : start;
};