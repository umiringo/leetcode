 ＝/**
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isMirror(root->left,root->right);
        
    }
private:
    bool isMirror(TreeNode *a, TreeNode *b){
        if(a == NULL && b == NULL) return true;
        else if(a == NULL || b == NULL) return false;
        else if(a->val != b->val) return false;
        return isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }
};

//iterative
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        queue<TreeNode *> qLeft,qRight;
        qLeft.push(root->left);
        qRight.push(root->right);
        while( !qLeft.empty() && !qRight.empty() ){
            auto tLeft = qLeft.front();
            qLeft.pop();
            auto tRight = qRight.front();
            qRight.pop();
            if(tLeft == NULL && tRight == NULL) continue;
            else if(tLeft == NULL || tRight == NULL) return false;
            else if(tLeft->val != tRight->val) return false;
            qLeft.push(tLeft->left), qLeft.push(tLeft->right);
            qRight.push(tRight->right),qRight.push(tRight->left);
        }
        return true;
    }
};