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
    TreeNode* lowestCommonAncestorNoRecursion(TreeNode* root, TreeNode* p, TreeNode* q) {
        auto n = root;
        while( n != NULL ){
            if(n->val > p->val && n->val > q->val ) n = n->left;
            else if(n->val < p->val && n->val < q->val) n = n->right;
            else return n;
        }
        return n;
    }

    TreeNode* lowestCommonAncestorRecursion(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val > p->val && root->val > q->val ) return lowestCommonAncestorRecursion(root->left,p,q);
        else if(root->val < p->val && root->val < q->val) return lowestCommonAncestorRecursion(root->right,p,q);
        else return root;
    }
};