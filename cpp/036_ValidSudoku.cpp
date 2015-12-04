class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowHash[9][9] = {0}, colHash[9][9] = {0}, gridHash[9][9] = {0};
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[i].size(); ++j){
                if(board[i][j] != '.'){
                    int index = board[i][j]-'0'-1;
                    int gridIndex = i/3 * 3 + j/3;
                    if(rowHash[i][index] || colHash[j][index] || gridHash[gridIndex][index]) return false;
                    rowHash[i][index] = colHash[j][index] = gridHash[gridIndex][index] = 1;
                }
            }
        }
        return true;
    }
};