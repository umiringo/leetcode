/**
 * @param {string} secret
 * @param {string} guess
 * @return {string}
 */
var getHint = function(secret, guess) {
    var bulls = 0, cows = 0;
    var hash = new Int8Array(10);
    for(var i = 0; i < secret.length; ++i){
        if(secret[i] == guess[i]) ++bulls;
        else{
            if(hash[secret[i] - '0']++ < 0) cows++;
            if(hash[guess[i] - '0']-- > 0) cows++;
        }
    }
    return bulls.toString()+"A"+cows.toString()+"B";
};