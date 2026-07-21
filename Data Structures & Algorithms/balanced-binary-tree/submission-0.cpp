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
public:
    int hight(TreeNode* root) {
        if(root==NULL) return 0;
        return 1+max(hight(root->left),hight(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int l=hight(root->left);
        int r=hight(root->right);
        if(abs(l-r)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
