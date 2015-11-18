/**
 * @param {number} n
 * @return {boolean}
 */
 
var sumS = function(n){
    var r = 0;
    while( n > 0 ){
        r += (n%10) * (n%10);
        n = Math.floor(n/10);
    }
    return r;
}
var isHappy = function(n) {
    var p = sumS(n);
    var q = sumS(p);
    while( p !== 1 ){
        if( p === q) return false;
        p = sumS(p);
        q = sumS( sumS(q) );
    }
    return true;
};