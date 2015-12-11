class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int m = k % len;
        reverseList(nums, 0,len-m-1);
        reverseList(nums, len-m,len-1);
        reverseList(nums, 0,len-1);
    }
private:
    void reverseList(vector<int>& num, int b, int e){
        while(b < e){
            int tmp = num[b];
            num[b] = num[e];
            num[e] = tmp;
            
            b++;
            e--;
        }
    }
};