class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int tail = nums.size()-1;
        for( int i = 0; i <= tail; ++i){
            if(nums[i] == val){
                nums[i] = nums[tail];
                tail--;
                i--;
            }
        }
        return tail+1;
    }
};