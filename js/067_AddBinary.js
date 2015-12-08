/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    var carry = '0';
    var ret = "";
    var i = a.length-1, j = b.length-1;
    while(i >= 0 || j >= 0 || carry == '1'){
        var x = i >= 0 ? a[i--] : '0';
        var y = j >= 0 ? b[j--] : '0';
        var result = charAdd(x,y,carry);
        ret = result[0] + ret;
        carry = result[1];
    }
    return ret;
};

var charAdd = function(a, b, c){
    if(a === '0' && b =='0' && c == '0') return ['0', '0'];
    else if(a === '0' && b =='0' && c == '1') return ['1', '0'];
    else if(a === '0' && b =='1' && c == '0') return ['1', '0'];
    else if(a === '0' && b =='1' && c == '1') return ['0', '1'];
    else if(a === '1' && b =='0' && c == '0') return ['1', '0'];
    else if(a === '1' && b =='0' && c == '1') return ['0', '1'];
    else if(a === '1' && b =='1' && c == '0') return ['0', '1'];
    else if(a === '1' && b =='1' && c == '1') return ['1', '1'];
}