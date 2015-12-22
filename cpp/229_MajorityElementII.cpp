class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int w1 = 0, wc1 = 0;
        int w2 = 0, wc2 = 0;
        for(auto n : nums){
            if(n == w1) wc1++;
            else if( n == w2 ) wc2++;
            else if(wc1 == 0) w1 = n,wc1 = 1;
            else if(wc2 == 0) w2 = n,wc2 = 1;
            else wc1--,wc2--;
        }
        std::cout << "w1:" << w1 << "w2" << w2 << std::endl;
        wc1 = 0,wc2 = 0;
        for(auto n : nums){
            if(n == w1) wc1++;
            else if(n == w2) wc2++;
        }
        vector<int> ret;
        if(wc1 > nums.size()/3) ret.push_back(w1);
        if(wc2 > nums.size()/3) ret.push_back(w2);
        return ret;
    }
};