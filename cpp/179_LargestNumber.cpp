class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ret = "";
        vector<string> tmp;
        for(auto i : nums){
            tmp.push_back(std::to_string(i));
        }
        std::sort(tmp.begin(), tmp.end(), compareString);
        if(tmp[0] == "0") return "0";
        for(auto i : tmp){
            ret += i;
        }
        return ret;
    }
    
    static bool compareString(string a, string b){
        return a+b > b+a;
    }
};