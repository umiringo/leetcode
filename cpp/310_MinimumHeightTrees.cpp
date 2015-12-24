class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        int count = n;
        int mark[n-1] = {};
        vector<int> degree(n,1);
        while(count > 2){
            for(int i = 0; i < n; i++){
                degree[i] = 0;
            }
            for(int i = 0; i < edges.size(); ++i){
                if(mark[i] == 1) continue;
                degree[edges[i].first]++;
                degree[edges[i].second]++;
            }
            
            for(int i = 0; i < edges.size(); ++i){
                int x = edges[i].first, y = edges[i].second;
                if(mark[i] == 1) continue;
                if( degree[x] == 1){
                    degree[x]--;
                    count--;
                    mark[i] = 1;
                }
                if( degree[y] == 1){
                    degree[y]--;
                    count--;
                    mark[i] = 1;
                }
            }
        }
        vector<int> ret;
        for(int i = 0; i < n; ++i){
            if( degree[i] > 0) ret.push_back(i);
        }
        return ret;
    }
};