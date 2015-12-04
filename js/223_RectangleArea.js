/**
 * @param {number} A
 * @param {number} B
 * @param {number} C
 * @param {number} D
 * @param {number} E
 * @param {number} F
 * @param {number} G
 * @param {number} H
 * @return {number}
 */
var computeArea = function(A, B, C, D, E, F, G, H) {
    var left = Math.max(A,E);
    var right = Math.max( left, Math.min(C,G));
    var bottom = Math.max(B,F);
    var top = Math.max(bottom, Math.min(D,H));
    return (C-A) * (D-B) + (G-E) * (H-F) - (right-left) * (top-bottom);
};