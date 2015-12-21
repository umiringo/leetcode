class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        if(matrix.empty()) return ret;
        int right = matrix[0].size()-1, left = 0;
        int up = 0, down = matrix.size()-1;
        while(1){
            //to right
            if(left > right) return ret;
            for(int i = left; i <= right; ++i){
                ret.push_back(matrix[up][i]);
            }
            up++;
            //to down
            if(up > down) return ret;
            for(int i = up; i <= down; ++i){
                ret.push_back(matrix[i][right]);
            }
            right--;
            //to left
            if(left > right) return ret;
            for(int i = right; i >= left; --i){
                ret.push_back(matrix[down][i]);
            }
            down--;
            //to up
            if(up > down) return ret;
            for(int i = down; i >= up; --i){
                ret.push_back(matrix[i][left]);
            }
            left++;
        }
        return ret;
    }
};