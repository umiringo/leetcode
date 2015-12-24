class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if(board.empty() || board[0].empty()) return;
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[i].size(); ++j){
                board[i][j] = update(board,i,j);
            }
        }
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[i].size(); ++j){
                if(board[i][j] == 0 || board[i][j] == 1) board[i][j] = 0;
                else board[i][j] = 1;
            }
        }
    }
private:
    int update(vector<vector<int>>&board, int i, int j){
        //扫9个
        int sum = 0;
        //上
        sum += fetchValue(board,i-1,j-1);
        sum += fetchValue(board,i-1,j);
        sum += fetchValue(board,i-1,j+1);
        //中
        sum += fetchValue(board,i,j-1);
        sum += fetchValue(board,i,j+1);
        //下
        sum += fetchValue(board,i+1,j-1);
        sum += fetchValue(board,i+1,j);
        sum += fetchValue(board,i+1,j+1);
        
        int self = board[i][j];
        if(self == 0){
            if(sum != 3) self = 0;
            else self = 2;
        }else{
            if(sum > 3) self = 1;
            else if(sum < 2) self = 1;
            else self = 3;
        }
        return self;
    }
    int fetchValue(vector<vector<int>>& board, int i, int j){
        if(i < 0 || j < 0) return 0;
        if(i >= board.size() || j >= board[0].size()) return 0;
        if(board[i][j] % 2 ) return 1;
        else return 0;
    }
};