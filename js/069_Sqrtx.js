/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if( x === 0 ) return 0;
    var l = 1;
    var h = x;
    while(true){
        var m = l + Math.floor((h-l)/2);
        if( m === Math.floor(x/m) ) return m;
        else if( m < Math.floor(x/m)){
            if(m+1 > Math.floor( x/(m+1) )) return m;
            l = m + 1;
        }else{
            h = m - 1;
        }
    }
};