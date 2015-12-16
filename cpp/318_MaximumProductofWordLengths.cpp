class Solution {
public:
    int maxProduct(vector<string>& words) {
        int size = words.size();
        int mark[size] = {};
        int len[size] = {};
        for(int i = 0; i < size; ++i){
            int m = 0;
            for(int j = 0; j < words[i].length(); ++j){
                m |= (1 << (words[i][j]-'a'));
            }
            mark[i] = m;
            len[i] = words[i].length();
        }
        int ret = 0;
        for(int i = 0; i < size-1; ++i){
            for(int j = i+1; j < size; ++j){
                if(mark[i] & mark[j]) continue;
                if(ret < len[i] * len[j]) ret = len[i]*len[j];
            }
        }
        return ret;
    }
};