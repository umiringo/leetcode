//math
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        int sum = 0;
        for(auto num : nums){
            sum += num;
        }
        return (n-1)*n/2 - sum;
    }
};

//bit
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int bit = nums.size();
        int i = 0;
        for(auto num : nums){
            bit ^= num;
            bit ^= i;
            i++;
        }
        return bit;
    }
};