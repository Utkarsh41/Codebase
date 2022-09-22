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
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }
    TreeNode* increasingBST(TreeNode* root) {
        
       if(root==nullptr)return root;
        
        
        if(root->left==NULL){
            TreeNode*r=increasingBST(root->right);
            root->right=r;
            root->left=NULL;
            return root;
        }
        
        
        else{
        
        TreeNode*l=increasingBST(root->left);
        TreeNode*r=increasingBST(root->right);
        
        TreeNode*tail=getTail(l);
        
        tail->right=root;
        root->right=r;
        root->left=NULL;
        return l;

        }
        
        
        
        
        
        
    }
    TreeNode*getTail(TreeNode*root){
        TreeNode*curr=root;
        while(curr->right!=NULL){
            curr=curr->right;
        }
        return curr;
    }
};