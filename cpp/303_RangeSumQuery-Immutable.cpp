class NumArray {
public:
    NumArray(vector<int> &nums) {
        if(nums.size() == 0) return;
        sumVector.resize(nums.size()+1);
        sumVector[0] = 0;
        for(int i = 0; i < nums.size(); i++){
            sumVector[i+1] = sumVector[i] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        if(i >= sumVector.size() || j+1 >= sumVector.size()) return 0;
        return sumVector[j+1] - sumVector[i];
    }
private:
    vector<int> sumVector;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);