class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	std::sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner = 0;
        int winnerCount = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(winnerCount == 0){
                winner = nums[i];
                winnerCount++;
            }else if(winner == nums[i]){
                winnerCount++;
            }else{
                winnerCount--;
            }
        }
        return winner;
    }
};