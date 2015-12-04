/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    var rowHash = [], colHash = [], gridHash = [];
    for(var m = 0; m < 9; ++m){
        rowHash[m] = [];
        colHash[m] = [];
        gridHash[m] = [];
        for(var n = 0; n < 9; ++n){
            rowHash[m].push(0);
            colHash[m].push(0);
            gridHash[m].push(0);
        }
    }
    
    for(var i = 0; i < board.length; ++i){
        for(var j = 0; j < board[i].length; ++j){
            if(board[i][j] != '.'){
                var index = parseInt(board[i][j]) - 1;
                var gridIndex = Math.floor(i/3)*3 + Math.floor(j/3);
                console.log("index:" + index + " grid:" + gridIndex);
                if(rowHash[i][index] || colHash[j][index] || gridHash[gridIndex][index]) return false;
                rowHash[i][index] = colHash[j][index] = gridHash[gridIndex][index] = 1;
            }
        }
    }
    return true;
};