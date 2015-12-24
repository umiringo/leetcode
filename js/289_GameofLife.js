/**
 * @param {number[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var gameOfLife = function(board) {
    if(board.length < 1 || board[0].length < 1) return;
    for(var i = 0; i < board.length; ++i){
        for(var j = 0; j < board[i].length; ++j){
            board[i][j] = update(board,i,j);
        }
    }
    for(var m = 0; m < board.length; ++m){
        for(var n = 0; n < board[0].length; ++n){
            if(board[m][n] < 2) board[m][n] = 0;
            else board[m][n] = 1;
        }
    }
};

var update = function(board, i ,j){
    var sum = 0;
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
    
    var self = board[i][j];
    if(self === 0){
       if(sum == 3) self = 2;
       else self = 0;
    }else{
        if(sum <= 3 && sum >= 2) self = 3;
        else self = 1;
    }
    return self;
};

var fetchValue = function(board, i, j){
    if(i < 0 || i >= board.length || j < 0 || j >= board[0].length) return 0;
    if(board[i][j] % 2) return 1;
    return 0;
};