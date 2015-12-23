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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> sTree;
        sTree.push(root);
        while(sTree.size()){
            auto t = sTree.top();
            if(t == NULL){
                sTree.pop();
                if(sTree.size()){
                   auto p = sTree.top();
                   sTree.pop();
                   if(p!= NULL) ret.push_back(p->val);
                }
            }else{
                if(t->left == NULL && t->right == NULL){
                    ret.push_back(t->val);
                    sTree.pop();
                }else{
                    sTree.push(NULL);
                    if(t->right) sTree.push(t->right);
                    if(t->left) sTree.push(t->left);
                }
            }
            
        }
        return ret;
    }
};if