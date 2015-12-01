class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if( triangle.empty() ) return 0;
        vector<int> curPath(triangle.size(), 0);
        curPath = triangle[triangle.size() - 1];
        for(int i = triangle.size() - 2; i >= 0; --i){
            for(int j = 0; j < i+1; j++){
                curPath[j] = std::min(curPath[j],curPath[j+1]) + triangle[i][j];
            }
        }
        return curPath[0];
    }
};