/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        for(auto p = root; p != NULL; p = p->left){
            sTree.push(p);
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !(sTree.empty());
    }

    /** @return the next smallest number */
    int next() {
        auto tmp = sTree.top();
        sTree.pop();
        for(auto q = tmp->right; q != NULL; q = q->left){
            sTree.push(q);
        }
        return tmp->val;
    }
private:
    stack<TreeNode*> sTree;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */