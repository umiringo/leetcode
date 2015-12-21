class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count = n*n;
        vector<vector<int>> ret(n, vector<int>(n,0));
        int left = 0;
        int right = n-1;
        int up = 0;
        int down = n-1;
        int num = 1;
        while(1){
            //to right
            if(num > count) break;
            for(int i = left; i <= right; ++i){
                ret[up][i] = num++;
            }
            up++;
            //to down
            if(num > count) break;
            for(int i = up; i <= down; ++i){
                ret[i][right] = num++;
            }
            right--;
            //to left
            if(num > count) break;
            for(int i = right; i >= left; --i){
                ret[down][i] = num++;
            }
            down--;
            //to up
            if(num > count) break;
            for(int i = down; i >= up; --i){
                ret[i][left] = num++;
            }
            left++;
        }
        return ret;
    }
};