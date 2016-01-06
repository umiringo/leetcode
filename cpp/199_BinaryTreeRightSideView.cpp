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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ret;
        if(root == NULL) return ret;
        queue<TreeNode*> qTree;
        qTree.push(root);
        qTree.push(NULL);
        while(qTree.size()){
            auto t = qTree.front();
            qTree.pop();
            if(t != NULL){
                auto n = qTree.front();
                if(n == NULL){
                    ret.push_back(t->val);
                }
                if(t->left) qTree.push(t->left);
                if(t->right) qTree.push(t->right);
            }else{
                if(qTree.size()) qTree.push(NULL);
            }
        }
        return ret;
    }
};