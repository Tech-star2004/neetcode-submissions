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
    vector<int>res;
    void inorder(TreeNode* a){
        if(a == nullptr) return;
        inorder(a->left);
        res.push_back(a->val);
        inorder(a->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
       res.clear();
       inorder(root);
       return res[k - 1];
    }
};
