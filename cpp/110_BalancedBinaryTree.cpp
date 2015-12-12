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
    bool isBalanced(TreeNode* root) {
        int height;
        return isBalanceWithHeight(root,height);
    }
private:
    bool isBalanceWithHeight(TreeNode *root, int& height){
        if(root == NULL){
            height = 0;
            return true;
        }
        int hLeft;
        int hRight;
        if(isBalanceWithHeight(root->left, hLeft) && isBalanceWithHeight(root->right, hRight) && abs(hLeft - hRight) <= 1 ){
            height = max(hLeft, hRight) + 1;
            return true;
        }
        height = max(hLeft, hRight) + 1;
        return false;
    }
};