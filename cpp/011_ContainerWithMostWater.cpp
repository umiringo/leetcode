class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max = 0;
        while(left < right){
            int t = std::min(height[left], height[right]);
            max = std::max(max, t * (right - left));
            while(height[left] <= t && left < right) left++;
            while(height[right] <= t && left < right) right--;
        }
        return max;
    }
};