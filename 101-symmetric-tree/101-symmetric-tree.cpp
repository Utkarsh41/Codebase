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
    bool ut(TreeNode*a,TreeNode*b){
        if(a==NULL && b==nullptr)return true;
        
        if((a!=NULL && b==NULL) || (a==NULL && b!=NULL) || (a->val != b->val)) return false;
        
        return ut(a->left,b->right) && ut(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        if(root==nullptr)return 0;
        
        return ut(root->left,root->right);
        
    }
};