class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = -1, white = -1, blue = -1;
        for(auto num : nums){
            if(num == 0){
                nums[++blue] = 2;
                nums[++white] = 1;
                nums[++red] = 0;
            }else if(num == 1){
                nums[++blue] = 2;
                nums[++white] = 1;
            }else if(num == 2){
                nums[++blue] = 2;
            }
        }
    }
};

//swap maybe not one pass
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, blue = nums.size()-1;
        for(int i = 0; i <= blue; ++i){
            while(nums[i] == 2 && i < blue) swap(nums[i],nums[blue--]);
            while(nums[i] == 0 && i > red) swap(nums[i],nums[red++]);
        }
    }
private:
    void swap(int& x, int& y){
        int t = x;
        x = y;
        y = t;
    }
};