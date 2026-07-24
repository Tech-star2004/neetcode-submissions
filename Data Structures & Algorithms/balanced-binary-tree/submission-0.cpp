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
    int helper(TreeNode* root, bool &chr){
        if(root == nullptr) return 0;
        if(!chr) return 0;
        int lh = helper(root->left, chr);
        int rh = helper(root->right, chr);
        if(abs(lh - rh) > 1) chr = false;
        return 1 + max(lh, rh);
    }
public:
    bool isBalanced(TreeNode* root) {
        bool chr = true;
        helper(root, chr);
        return chr;
    }
};
