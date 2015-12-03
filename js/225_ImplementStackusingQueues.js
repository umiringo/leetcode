/**
 * @constructor
 */
var Stack = function() {
    this.queue = [];
};

/**
 * @param {number} x
 * @returns {void}
 */
Stack.prototype.push = function(x) {
    this.queue.push(x);
    for(var i = 0 ; i < this.queue.length -1; ++i){
        this.queue.push(this.queue.shift());
    }
};

/**
 * @returns {void}
 */
Stack.prototype.pop = function() {
    this.queue.shift();
};

/**
 * @returns {number}
 */
Stack.prototype.top = function() {
    return this.queue[0];
};

/**
 * @returns {boolean}
 */
Stack.prototype.empty = function() {
    console.log(this.queue.length);
    return this.queue.length < 1;
};