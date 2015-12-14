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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return ret;
        pathTree(root, std::to_string(root->val));
        return ret;
    }
private:
    vector<string> ret;
    
    void pathTree(TreeNode* root,string pre){
        if(!root->left && !root->right){
            ret.push_back(pre);
            return; 
        }
        if(root->left) pathTree(root->left, pre + "->" + std::to_string(root->left->val));
        if(root->right) pathTree(root->right,pre + "->" + std::to_string(root->right->val));
    }
};