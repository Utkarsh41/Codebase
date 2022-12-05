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
class Solution2 {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        if(!root->left && !root->right)return true;
        
        if((root->left && root->left->val >= root->val) || 
           (root->right&& root->right->val <= root->val))
        {return false;}
        
        
        if(isValidBST(root->left)==false)return false;
        if(isValidBST(root->right)==false)return false;
        
        return true;

        
    }
};


class Solution {
public:
    vector<int>res;
    void solve(TreeNode*root){
        if(root==NULL)return;
        solve(root->left);
        res.push_back(root->val);
        solve(root->right);

    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        
        // if(!root->left && !root->right)return true;
        solve(root);
        
        // return solve(root->left)&& solve(root->right);
        return chk(res);

        
    }
    bool chk(vector<int>&res){
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>=res[i+1]){
                return false;
            }
        }
        return true;
    }
};