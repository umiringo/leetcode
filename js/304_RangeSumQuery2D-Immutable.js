/**
 * @constructor
 * @param {number[][]} matrix
 */

 //solution 1
var NumMatrix = function(matrix) {
    this.sumMatrix = [];
    for(var i=0; i<matrix.length; ++i){
        this.sumMatrix[i] = new Array(matrix[i].length+1);
        this.sumMatrix[i][0] = 0;
        for(var j=0;j<matrix[i].length;++j){
            this.sumMatrix[i][j+1] = this.sumMatrix[i][j] + matrix[i][j];
        }
    }
};

/**
 * @param {number} row1
 * @param {number} col1
 * @param {number} row2
 * @param {number} col2
 * @return {number}
 */
NumMatrix.prototype.sumRegion = function(row1, col1, row2, col2) {
    var sum = 0;
    for(var i=row1; i<=row2; ++i){
        sum += (this.sumMatrix[i][col2+1] - this.sumMatrix[i][col1]);
    }
    return sum;
};

//solution 2
/**
 * @constructor
 * @param {number[][]} matrix
 */
var NumMatrix = function(matrix) {
    this.sumMatrix = matrix;
    for(var i = 0; i < matrix.length; ++i){
        for(var j = 0; j < matrix[i].length; ++j){
            this.sumMatrix[i][j] += this.accu(i-1,j) + this.accu(i,j-1) - this.accu(i-1,j-1);
        }
    }
};

/**
 * @param {number} row1
 * @param {number} col1
 * @param {number} row2
 * @param {number} col2
 * @return {number}
 */
NumMatrix.prototype.sumRegion = function(row1, col1, row2, col2) {
    return this.accu(row2,col2) - this.accu(row1-1,col2) - this.accu(row2, col1-1) + this.accu(row1-1, col1-1);
};

NumMatrix.prototype.accu = function(i, j){
    return i>=0 && j>=0 ? this.sumMatrix[i][j] : 0;
}


/**
 * Your NumMatrix object will be instantiated and called as such:
 * var numMatrix = new NumMatrix(matrix);
 * numMatrix.sumRegion(0, 1, 2, 3);
 * numMatrix.sumRegion(1, 2, 3, 4);
 */