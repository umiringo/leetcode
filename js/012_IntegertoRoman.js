/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    var Ones = ["","I","II","III","IV","V","VI","VII","VIII","IX"];
    var Tens = ["","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"];
    var Huns = ["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"];
    var Thos = ["","M","MM","MMM"];
    return Thos[Math.floor(num/1000) % 10] + Huns[Math.floor(num/100) % 10] + Tens[Math.floor(num/10) % 10] + Ones[num%10];
};