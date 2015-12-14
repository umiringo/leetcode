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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root) return ret;
        vector<TreeNode*> q;
        q.push_back(root);
        q.push_back(NULL);
        int index = 0;
        while(index < q.size()){
            auto t = q[index++];
            if( t == NULL ){
                if(index < q.size()) q.push_back(NULL);
            }else{
                if(t->right) q.push_back(t->right);
                if(t->left) q.push_back(t->left);
            }
        }
        
        vector<int> cur;
        for(int i = q.size()-1; i >= 0; --i){
            if(q[i] != NULL){
                cur.push_back(q[i]->val);
            }else{
                if(cur.size()){
                    ret.push_back(cur);
                    cur.resize(0);
                }
            }
        }
        if(cur.size()) ret.push_back(cur);
        return ret;
    }
};