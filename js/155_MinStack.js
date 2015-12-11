/**
 * @constructor
 */
var MinStack = function() {
    this.normal = [];
    this.min = [];
};

/**
 * @param {number} x
 * @returns {void}
 */
MinStack.prototype.push = function(x) {
    this.normal.push(x);
    if(this.min.length < 1 || x <= this.min[this.min.length - 1]){
        this.min.push(x);
    }
};

/**
 * @returns {void}
 */
MinStack.prototype.pop = function() {
    if(this.min[this.min.length - 1] === this.normal[this.normal.length - 1]){
        this.min.pop();
    }
    this.normal.pop();
};

/**
 * @returns {number}
 */
MinStack.prototype.top = function() {
    return this.normal[this.normal.length-1];
};

/**
 * @returns {number}
 */
MinStack.prototype.getMin = function() {
    return this.min[this.min.length-1];
};