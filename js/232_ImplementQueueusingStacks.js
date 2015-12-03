/**
 * @constructor
 */
 
var Queue = function() {
    this.in = [];
    this.out = [];
};

/**
 * @param {number} x
 * @returns {void}
 */
Queue.prototype.push = function(x) {
    this.in.push(x);
};

/**
 * @returns {void}
 */
Queue.prototype.pop = function() {
    this.peek();
    this.out.pop();
};

/**
 * @returns {number}
 */
Queue.prototype.peek = function() {
    if(this.out.length < 1){
        while(this.in.length > 0){
            this.out.push(this.in.pop());
        }
    }
    return this.out[this.out.length - 1];
};

/**
 * @returns {boolean}
 */
Queue.prototype.empty = function() {
    return this.in.length < 1 && this.out.length < 1;
};