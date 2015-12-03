//solution 1
class NumMatrix {
public:
    NumMatrix(vector<vector<int>> &matrix) {
        if(matrix.empty()) return;
        sumMatrix.resize(matrix.size());
        for(int i = 0; i < matrix.size(); ++i){
            sumMatrix[i].resize(matrix[i].size() + 1);
            sumMatrix[i][0] = 0;
            for(int j = 0; j < matrix[i].size(); ++j){
                sumMatrix[i][j+1] = sumMatrix[i][j] + matrix[i][j];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2; ++i){
            sum += sumMatrix[i][col2+1] - sumMatrix[i][col1]; 
        }
        return sum;
    }
private:
    vector<vector<int>> sumMatrix;    
};

//solution 2
class NumMatrix {
public:
    NumMatrix(vector<vector<int>> &matrix) {
        sumMatrix = matrix;
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[i].size(); ++j){
                sumMatrix[i][j] += (accu(i-1,j) + accu(i,j-1) - accu(i-1,j-1));
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return accu(row2, col2) - accu(row1-1, col2) - accu(row2, col1-1) + accu(row1-1, col1-1);
    }
private:
    vector<vector<int>> sumMatrix;
    
    int accu(int i, int j){
        return i >= 0 && j >= 0 ? sumMatrix[i][j] : 0;
    }
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);