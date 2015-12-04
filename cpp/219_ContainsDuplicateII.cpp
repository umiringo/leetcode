class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); ++i){
            if(hash[nums[i]] && i - hash[nums[i]] + 1 <= k) return true;
            else hash[nums[i]] = i+1;
        }
        return false;
    }
};