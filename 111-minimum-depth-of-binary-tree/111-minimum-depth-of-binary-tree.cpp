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

    int minDepth(TreeNode* root) {
        
        if(root==NULL)return 0;
        
        if(root->left==nullptr && root->right==nullptr){return 1;}
        
         if(root->left==nullptr){
             return minDepth(root->right)+1;
         }
        if(root->right==nullptr){
             return minDepth(root->left)+1;
         }
        
        
        
        return 1 + min(minDepth(root->left),minDepth(root->right));
        
    }
};