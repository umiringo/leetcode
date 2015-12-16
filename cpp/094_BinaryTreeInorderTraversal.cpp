/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//hash
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        std::unordered_map<TreeNode*, int> hash;
        if(root == NULL) return ret;
        stack<TreeNode*> s;
        s.push(root);
        hash[root] = 1;
        while(s.size()){
            auto t = s.top();
            if(t->left && hash.find(t->left) == hash.end()){
                s.push(t->left);
                hash[t->left] = 1;
            }else{
                ret.push_back(t->val);
                s.pop();
                if(t->right){
                    s.push(t->right);
                    hash[t->right] = 1;
                }
            }
        }
        return ret;
    }
};

//one node
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> s;
        auto curNode = root;
        while(s.size() || curNode){
            if(curNode){
                s.push(curNode);
                curNode = curNode->left;
            }else{
                auto t = s.top();
                s.pop();
                ret.push_back(t->val);
                curNode = t->right;
            }
        }
        return ret;
    }
};