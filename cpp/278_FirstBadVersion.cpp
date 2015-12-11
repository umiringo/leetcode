// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n, m;
        while(low < high){
            m = (high-low)/2 + low;
            if(!isBadVersion(m)) low = m + 1;
            else high = m;
        }
        return low;
    }

};