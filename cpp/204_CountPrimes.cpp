class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n, true);
        genPrimesHash(n, isPrime);
        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i]) ++count;
        }
        return count;
    }
private:
    //Eratosthenes
    void genPrimesHash(int n, vector<bool>& isPrime){
        for(int i = 0; i < n; i++){
            if(i <= 1) isPrime[i] = false;
            if(isPrime[i]){
                for(int j = i+i; j <= n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
    }

};

//Euler
class Solution {
public:
    int countPrimes(int n) {
        vector<int> primeList;
        vector<bool> isPrime(n, true);
        for(int i = 0; i < n; ++i){
            if(i <= 1) isPrime[i] = false;
            if(isPrime[i]) primeList.push_back(i);
            for(int j = 0; j < primeList.size(); ++j){
                if(i * primeList[j] > n) break;
                isPrime[i * primeList[j]] = false;
                if( i % primeList[j] == 0) break;
            }
        }
        return primeList.size();
    }
};