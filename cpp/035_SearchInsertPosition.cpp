class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int l = 0,h = len-1,pos = 0;
        while(l <= h){
            int m = l + (h-l)/2;
            if(nums[m] == target) return m;
            if(nums[m] < target){
                l = m+1;
                pos = l;
            }else{
                h = m-1;
                pos = h+1;
            }
        }
        return pos;
    }
};