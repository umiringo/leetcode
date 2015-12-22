//native
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> pathStack;
        int i = 0;
        while(i < path.length()){
            string t = "";
            if(path[i] == '/'){
                ++i;
                while(i < path.length() && path[i] != '/'){
                    t += path[i];
                    i++;
                }
                if(t == ".."){
                    if(!pathStack.empty()) pathStack.pop();
                }else if( t == "." || t == ""){
                    continue;
                }else{
                    pathStack.push(t);
                }
            }
        }
        string ret = "";
        while(!pathStack.empty()){
            if(ret == "") ret = pathStack.top();
            else ret = pathStack.top() + '/' + ret;
            pathStack.pop();
        }
        ret = "/" + ret;
        return ret;
    }
};

//clear
class Solution {
public:
    string simplifyPath(string path) {
        string tmp;
        stack<string> pathStack;
        stringstream ss(path);
        while(getline(ss, tmp, '/')){
            if(tmp == "" or tmp == "." ) continue;
            if(tmp == ".." and !pathStack.empty()) pathStack.pop();
            else if(tmp != "..") pathStack.push(tmp);
        }
        string ret = "";
        while(!pathStack.empty()){
            if(ret == "") ret = pathStack.top();
            else ret = pathStack.top() + "/" + ret;
            pathStack.pop();
        }
        ret = "/" + ret;
        return ret;
    }
};