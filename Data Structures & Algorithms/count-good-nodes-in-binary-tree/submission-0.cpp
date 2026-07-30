/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
private:

    int helper(TreeNode* r, int maxv){
        if(r == nullptr) return 0;
        int gn = 0;
        if(r->val >= maxv){
            maxv = r->val;
            gn = 1;
        }
        gn += helper(r->left, maxv);
        gn += helper(r->right, maxv);
        return gn;
    }
public:
    int goodNodes(TreeNode* root) {
        return helper(root, root->val);
    }
};
