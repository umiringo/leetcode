//log(m)+log(n)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size()-1;
        while( l < h ){
            int m = (l+h)/2;
            if(matrix[m][0] == target) return true;
            else if(matrix[m][0] < target) l = m+1;
            else h = m-1;
        }
        int row = l;
        if(l > 0 && matrix[l][0] > target) row--;
        std::cout << "row:" << row << std::endl;
        l = 0;
        h = matrix[row].size()-1;
        while( l <= h ){
            int m = (l+h)/2;
            if(matrix[row][m] == target) return true;
            else if(matrix[row][m] < target) l = m+1;
            else h = m-1;
        }
        return false;
    }
};

//log(mn)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, h = m*n - 1;
        while(l <= h){
            int mid = (l + h) >> 1;
            if(matrix[mid/n][mid%n] == target) return true;
            else if(matrix[mid/n][mid%n] < target) l = mid+1;
            else h = mid-1;
        }
        return false;
    }
};