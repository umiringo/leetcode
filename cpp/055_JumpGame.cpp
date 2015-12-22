class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0, index = 0;
        while(index < nums.size() && index <= reach){
            reach = std::max( reach, index + nums[index]);
            if(reach >= nums.size()-1) return true;
            ++index;
        }
        return index == nums.size();
    }
};