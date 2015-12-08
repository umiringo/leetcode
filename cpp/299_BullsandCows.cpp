class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        int hash[10] = {};
        for(int i = 0; i < secret.size(); ++i){
            if(secret[i] == guess[i]) ++bulls;
            else{
                if(hash[secret[i] - '0']++ < 0) cows++;
                if(hash[guess[i] - '0']-- > 0) cows++;
            }
        }
        string ret = std::to_string(bulls) + "A" + std::to_string(cows)+"B";
        return ret;
    }
};