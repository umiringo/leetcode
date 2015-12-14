q./**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
//recursive
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        buildVector(root, 0);
        return ret;
    }
private:
    vector<vector<int>> ret;
    
    void buildVector(TreeNode *root, int depth){
        if(root == NULL) return;
        if(ret.size() == depth) ret.push_back(vector<int>());
        ret[depth].push_back(root->val);
        buildVector(root->left, depth+1);
        buildVector(root->right, depth+1);
    }
};

//iterative
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root) return ret;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> cur;
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            if( t == NULL ){
                ret.push_back(cur);
                cur.resize(0);
                if(q.size()) q.push(NULL);
            }else{
                cur.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return ret;
    }
};