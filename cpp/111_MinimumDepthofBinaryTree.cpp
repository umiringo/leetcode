/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
//DFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left) return minDepth(root->right) + 1;
        else if(!root->right) return minDepth(root->left) + 1;
        return std::min(minDepth(root->right), minDepth(root->left)) + 1;
    }
};

//BFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        int depth = 0;
        if(!root) return depth;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()){
            auto t = q.front();
            q.pop();
            if(t == NULL){
                depth++;
                if(q.size()) q.push(NULL);
            }else{
                if(!t->left && !t->right) return depth+1;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return depth;
    }
};