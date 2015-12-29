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
    int sumNumbers(TreeNode* root) {
        if(root == NULL) return 0;
        return sumTree(root,0);
    }
private:
    int sumTree(TreeNode *root, int val){
        if(root->left == NULL && root->right == NULL) return val * 10 + root->val;
        int ret = 0;
        if(root->left != NULL){
            ret += sumTree(root->left, 10*val + root->val);
        }
        if(root->right != NULL){
            ret += sumTree(root->right, 10*val + root->val);
        }
        return ret;
    }
};