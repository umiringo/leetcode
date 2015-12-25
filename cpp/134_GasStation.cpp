class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int total = 0;
        int remain = 0;
        for(int i = 0; i < gas.size(); ++i){
            remain = remain + gas[i] - cost[i];
            if(remain < 0){
                total += remain;
                start = i+1;
                remain = 0;
            }
        }
        return total + remain < 0 ? -1 : start;
    }
};