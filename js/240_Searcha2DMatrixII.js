/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    if(matrix.length < 0 || matrix[0].length < 0) return false;
    return binarySearchMatrix(matrix,0,0,matrix.length-1,matrix[0].length-1,target);
};

var binarySearchMatrix = function(matrix,li,lj,hi,hj,target) {
    if(li > hi || lj > hj) return false;
    var mi = Math.floor((li + hi)/2), mj = Math.floor((lj + hj)/2);
    if(matrix[mi][mj] == target) return true;
    else if(matrix[mi][mj] > target){
        return binarySearchMatrix(matrix,li,lj,hi,mj-1,target) || binarySearchMatrix(matrix,li,mj,mi-1,hj,target);
    }else{
        return binarySearchMatrix(matrix,li,mj+1,hi,hj,target) || binarySearchMatrix(matrix,mi+1,lj,hi,mj,target);
    }
    return false;
}