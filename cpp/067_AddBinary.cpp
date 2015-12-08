class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        string ret = "";
        int i = a.size()-1, j = b.size()-1;
        while( i >= 0 || j >= 0 || carry == '1'){
            char x = i >= 0 ? a[i--] : '0';
            char y = j >= 0 ? b[j--] : '0';
            ret = charAdd(x,y,carry) + ret;
        }
        return ret;
    }
    
private:
    char charAdd(char a, char b, char& carry){
        char ret = '0';
        if(a == '0'){
            if(b == '0'){
                if(carry == '0'){ //000
                    return ret;
                }else{          //001
                    ret = '1';
                    carry = '0';
                    return ret;
                }
            }else{
                if(carry == '0'){  //010
                    ret = '1';
                    return ret; 
                }else{   //011
                    return ret;
                }
            }
        }else{
            if(b == '0'){
                if(carry == '0'){ //100
                    ret = '1';
                    return ret;
                }else{ //101
                    return ret;
                }
            }else{
                if(carry == '0'){ //110
                    carry = '1';
                    return ret;
                }else{ //111
                    ret = '1';
                    return ret;
                }
            }
        }
        return ret;
    }
};