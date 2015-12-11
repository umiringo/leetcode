/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    var primeHash = [];
    for(var k = 0; k < n; k++){
        primeHash[k] = true;
    }
    var primeList = [];
    for(var i = 0; i < n; ++i){
        if(i <= 1) primeHash[i] = false;
        if(primeHash[i]) primeList.push(i);
        for(var j = 0; j < primeList.length; ++j){
            if(i * primeList[j] > n) break;
            primeHash[i * primeList[j]] = false;
            if(i % primeList[j] === 0) break;
        }
    }
    return primeList.length;
};