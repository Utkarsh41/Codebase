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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int u=0;
        height(root,u);
        return u;
        
    }
    int height(TreeNode*root,int& u){
        if(root==NULL)return 0;
        
        int lh=height(root->left,u);
        int rh=height(root->right,u);
        
        u=max(u,lh+rh);
        return 1+max(lh,rh);

    }
};