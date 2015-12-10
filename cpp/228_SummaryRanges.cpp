class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        const int len = nums.size();
        vector<string> ret;
        for(int i = 0; i < len; ++i){
            int head = nums[i], offset = 0;
            while(i < len-1 && nums[i+1] - nums[i] == 1){
                ++offset;
                ++i;
            }
            if(offset > 0) ret.push_back( std::to_string(head) + "->" + std::to_string(head + offset) );
            else ret.push_back( std::to_string(head) );
        }
        return ret;
    }
};