class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        return randomSelect(nums,0,nums.size()-1,k);
    }
private:
    int partition(vector<int>& nums, int b, int e){
        int x = nums[b];
        int i = b;
        for(int j = i+1; j <= e; ++j){
            if(nums[j] > x){
                swap(nums[++i],nums[j]);
            }
        }
        swap(nums[i],nums[b]);
        return i;
    }
    
    void swap(int &x, int &y){
        int t = x;
        x = y;
        y = t;
    }
    
    int randomSelect(vector<int>& nums, int b, int e, int i){
        if(b == e) return nums[b];
        int m = partition(nums,b,e);
        int k = m - b +1; //修正m
        if(k == i) return nums[m];
        else if( i < k) return randomSelect(nums,b,m-1,i);
        else return randomSelect(nums,m+1,e,i-k);
    }
};