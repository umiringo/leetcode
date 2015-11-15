class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	std::unordered_map<int, int> hash;
    	for( size_t i = 0; i < nums.size(); ++i ){
    		if( hash.find(nums[i]) == hash.end() ){
    			hash[nums[i]] = 1;
    		} else {
    			return true;
    		}
    	}
    	return false;
    }
};