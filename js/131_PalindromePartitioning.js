/**
 * @param {string} s
 * @return {string[][]}
 */
var partition = function(s) {
    var ret = [];
    backtrace(ret,[],0,s);
    return ret;
    
    function isPalidrome(str,begin,end){
        while(begin < end){
            if(str[begin] !== str[end]) return false;
            begin++;
            end--;
        }
        return true;
    }
    
    function backtrace(ret, path, index, s){
        if(index === s.length){
            ret.push(path.concat());
            return;
        }
        for(var i = index; i < s.length; ++i){
            if(isPalidrome(s,index,i)){
                path.push(s.substring(index,i+1));
                backtrace(ret,path,i+1,s);
                path.pop();
            }
        }
    }
};