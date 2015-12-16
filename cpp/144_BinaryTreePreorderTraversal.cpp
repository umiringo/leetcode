/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 //Recursive
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == NULL) return ret;
        ret.push_back(root->val);
        vector<int> leftRet = preorderTraversal(root->left);
        ret.insert(ret.end(),leftRet.begin(),leftRet.end());
        vector<int> rightRet = preorderTraversal(root->right);
        ret.insert(ret.end(),rightRet.begin(),rightRet.end());
        return ret;
    }
};

//Iterative
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode *> sTree;
        sTree.push(root);
        while(sTree.size()){
            auto t = sTree.top();
            sTree.pop();
            if(t != NULL){
                ret.push_back(t->val);
                if(t->right) sTree.push(t->right);
                if(t->left) sTree.push(t->left);
            }
        }
        return ret;
    }
};