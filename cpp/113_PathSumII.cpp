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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ret;
        vector<int> path;
        fetchPath(root,ret,path,sum);
        return ret;
    }
private:
    void fetchPath(TreeNode* root, vector<vector<int>>& ret, vector<int>& path, int sum){
        if(!root) return;
        path.push_back(root->val);
        if(root->val == sum && root->left == NULL && root->right == NULL) ret.push_back(path);
        fetchPath(root->left,ret,path,sum-root->val);
        fetchPath(root->right,ret,path,sum-root->val);
        path.pop_back();
    }
};