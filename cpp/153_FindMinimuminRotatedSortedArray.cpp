class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size()-1;
        while(nums[l] > nums[h]) {
            int m = (l+h)/2;
            if(nums[l] <= nums[m]) l = m+1;
            else h = m;
        }
        return nums[l];
    }
};