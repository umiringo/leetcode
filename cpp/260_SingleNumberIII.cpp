class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0;
        for(auto num : nums){
            diff ^= num;
        }
        diff &= -diff;
        
        vector<int> ret(2,0);
        for(auto num : nums){
            if((num & diff) == 0) ret[0] ^= num;
            else ret[1] ^= num;
        }
        return ret;
    }
};