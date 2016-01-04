class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        vector<int> ret(2,-1);
        while(l < h){
            int m = l + (h-l)/2;
            if(nums[m] < target) l = m + 1;
            else h = m;
        }
        if(nums[l] == target) ret[0] = l;
        h = nums.size()-1;
        while(l < h){
            int m = l + (h-l)/2 + 1;
            if(nums[m] > target) h = m - 1;
            else l = m;
        }
        if(nums[h] == target) ret[1] = h;
        return ret;
    }
};