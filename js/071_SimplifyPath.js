/**
 * @param {string} path
 * @return {string}
 */
var simplifyPath = function(path) {
    var stack = [];
    var pathArray = path.split("/");
    console.log("path:" + pathArray);
    for(var i in pathArray){
        var s = pathArray[i];
        if(s === "" || s === ".") continue;
        if(s === "..") {
            if(stack.length > 0) stack.pop();
        }else stack.push(s);
    }
    
    console.log("stack:" + stack);
    var ret = "";
    for(var j in stack){
        ret += "/" + stack[j];
    }
    return ret === "" ? "/" : ret;
};