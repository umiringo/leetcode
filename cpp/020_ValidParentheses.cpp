class Solution {
public:
    bool isValid(string s) {
        stack<char> cStack;
        for(auto i : s){
            switch(i){
                case '(':
                case '[':
                case '{':
                    cStack.push(i);
                    break;
                case ')':
                    if(cStack.empty() || cStack.top() != '(') return false;
                    cStack.pop();
                    break;
                case ']':
                    if(cStack.empty() || cStack.top() != '[') return false;
                    cStack.pop();
                    break;
                case '}':
                    if(cStack.empty() || cStack.top() != '{') return false;
                    cStack.pop();
                    break;
                default:
                    return false;
            }
        }
        return cStack.empty();
    }
};