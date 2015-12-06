/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    var cs = [];
    for(var i in s){
        switch( s[i] ){
            case '(':
            case '[':
            case '{':
                cs.push(s[i]);
                break;
            case ')':
                if(cs.length < 1 || cs.pop() !== '(') return false;
                break;
            case ']':
                if(cs.length < 1 || cs.pop() !== '[') return false;
                break;
            case '}':
                if(cs.length < 1 || cs.pop() !== '{') return false;
                break;
        }
    }
    return cs.length === 0;
};