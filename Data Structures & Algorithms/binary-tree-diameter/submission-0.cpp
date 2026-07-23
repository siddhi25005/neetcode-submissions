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
        if(root==NULL) {
            return 0;
        }
        int lh=hight(root->left);
        int rh=hight(root->right);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=hight(root->left);
        int rh=hight(root->right);
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        return max(lh+rh,max(ld,rd));
    }
};
