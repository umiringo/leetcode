class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        while(l < h){
            int m = (h+l+1)/2;
            if(nums[m-1] > nums[m]){
                h = m -1;
            }else{
                l = m;
            }
        }
        return l;
    }
};