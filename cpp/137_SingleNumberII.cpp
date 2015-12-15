//with 32 hash
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> hash(32,0);
        for(auto num : nums){
            for(int i = 0; i < 32; ++i){
                if((num & (1 << i)) != 0){
                   hash[i] = (hash[i] + 1) % 3; 
                }
            }
        }
        int ret = 0;
        for(int i = 0; i < hash.size(); ++i){
            if(hash[i] > 0){
                ret |= (1 << i);
            }
        }
        return ret;
    }
};

//with 2 variable
