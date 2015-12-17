class Solution {
public:
    string intToRoman(int num) {
        string Ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string Tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string Huns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string Thos[] = {"","M","MM","MMM"};
        return Thos[(num/1000)%10] + Huns[(num/100)%10] + Tens[(num/10)%10] + Ones[num%10];
    }
};