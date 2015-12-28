class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        return binarySearchMatrix(matrix,0,0,matrix.size()-1,matrix[0].size()-1,target);
    }
private:
    bool binarySearchMatrix(vector<vector<int>>& matrix, int li, int lj, int hi, int hj, int target){
        if(li > hi || lj > hj) return false;
        int mi = (li + hi)/2;
        int mj = (lj + hj)/2;
        if(matrix[mi][mj] == target) return true;
        else if(matrix[mi][mj] > target){
            return binarySearchMatrix(matrix,li,lj,hi,mj-1,target) || binarySearchMatrix(matrix,li,mj,mi-1,hj,target);
        }else{
            return binarySearchMatrix(matrix,li,mj+1,hi,hj,target) || binarySearchMatrix(matrix,mi+1,lj,hi,mj,target);
        }
        return false;
    }
};