class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty()) return 0;
        int len = citations.size();
        int hash[len] = {};
        for(auto c : citations){
            if(c > len) hash[len-1]++;
            else hash[c-1]++;
        }
        int count = 0;
        for(int i = len; i > 0; --i){
            if(count + hash[i-1] >= i) return i;
            count += hash[i-1];
        }
        return 0;
    }
};