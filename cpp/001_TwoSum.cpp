class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ret;
        std::unordered_map<int, int> hash;

        for( size_t i = 0; i < numbers.size(); ++i ){
            std::unordered_map<int, int>::iterator it = hash.find( target - numbers[i] );
            if( it != hash.end() ){
                ret.push_back( hash[target - numbers[i]] );
                ret.push_back( i+1 );
                return ret;
            }
            hash[ numbers[i] ] = i + 1;
        }
        
        return ret;
    }
};