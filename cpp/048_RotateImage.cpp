class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if( n < 2 ) return;
        int i = 0, j = 0;
        for(int i = 0; i < n/2; ++i){
            int bound = n - i - 1;
            int j = i;
            while( j < bound ){
                int t = matrix[i][j];
                int p = i;
                int q = j;
                for( int k = 0; k < 3; k++){
                    matrix[p][q] = matrix[n-1-q][p];
                    int m = p;
                    p = n-1-q;
                    q = m;
                }
                matrix[p][q] = t;
                ++j;
            }
        }
    }
};


//clear
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        std::reverse(matrix.begin(), matrix.end());
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < i; ++j){
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;            
                
            }
        }
    }
};