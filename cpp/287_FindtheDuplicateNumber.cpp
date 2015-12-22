class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int h = nums.size() - 1;
        while(l < h){
           int m = l + (h-l)/2;
           int less = 0;
           for(int i = 0; i < nums.size(); ++i){
               if(nums[i] <= m) less++;
           }
           if(less <= m) l = m+1;
           else h = m;
            
        }
        return l;
    }
};

//clever
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.empty()) return -1;
        int slow = nums[0];
        int fast = nums[nums[0]];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        std::cout << "slow:" << slow << " fast:" << fast <<std::endl;
        fast = 0;
        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};