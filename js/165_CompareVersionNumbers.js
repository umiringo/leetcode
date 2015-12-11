/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    var vl1 = version1.split('.');
    var vl2 = version2.split('.');
    console.log("v1:"+vl1+" v2:"+vl2);
    var i = 0;
    while( i < vl1.length ){
        if(i >= vl2.length){
            if(parseInt(vl1[i]) !== 0) return 1;
        }else{
            if(parseInt(vl1[i]) > parseInt(vl2[i])) return 1;
            else if(parseInt(vl1[i]) < parseInt(vl2[i])) return -1;
        }
        ++i;
    }
    while( i < vl2.length ){
        if(parseInt(vl2[i]) !== 0 ) return -1;
        ++i;
    }
    return 0;
};