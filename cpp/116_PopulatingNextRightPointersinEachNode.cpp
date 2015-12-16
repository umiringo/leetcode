/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        queue<TreeLinkNode *> q;
        q.push(root);
        q.push(NULL);
        while(q.size()){
            auto t = q.front();
            q.pop();
            if(t != NULL){
                t->next = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }else{
                if(q.size()) q.push(NULL);
            }
        }
    }
};