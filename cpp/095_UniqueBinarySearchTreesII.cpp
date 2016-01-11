/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if( n < 1 ) return vector<TreeNode*>();
        return recursive(1,n);
    }
    
private:
    vector<TreeNode *> recursive(int begin, int end){
        vector<TreeNode *> ret;
        if(begin > end){
            ret.push_back(NULL);
            return ret;
        }
        for(int i = begin; i <= end; ++i){
            auto left = recursive(begin,i-1);
            auto right = recursive(i+1,end);
            for(auto m : left){
                for(auto n : right){
                    auto node = new TreeNode(i);
                    node->left = m;
                    node->right = n;
                    ret.push_back(node);
                }
            }
        }
        return ret;
    }
};