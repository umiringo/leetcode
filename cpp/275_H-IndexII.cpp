class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        int l = 0, h = len-1;

        while(l <= h){
            int m = l + (h-l)/2;
            if(citations[m] == len - m) return len - m;
            else if(citations[m] > len - m) h = m-1;
            else l = m + 1;
        }
        return len- h - 1;
    }
};