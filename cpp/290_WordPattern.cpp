class Solution {
public:
    bool wordPattern(string pattern, string str) {
        std::unordered_map<char,intvar> pHash;
        std::unordered_map<string,int> sHash;
        int sCount = 0;
        for(int i = 0; i < pattern.size(); ++i){
            string tmp;
            if(sCount >= str.length()) return false;
            while(sCount < str.length() && str[sCount] != ' '){
                tmp += str[sCount];
                sCount++;
            }
            if(pHash[pattern[i]] != sHash[tmp]) return false;
            else pHash[pattern[i]] = sHash[tmp] = i+1;
            
            sCount++;
        }
        return sCount == str.length() + 1;
    }
};