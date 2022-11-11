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
/*
class Solution1 {
public:
   
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)return true;
        
        int lh=ht(root->left);
        int rh=ht(root->left);
        
        return  isBalanced(root->left) && isBalanced(root->right)&& abs(lh-rh)<=1;  
    }
    private:
     int ht(TreeNode*root){
        if(root==nullptr)return 0;
        return 1+max(ht(root->left),ht(root->right));
    }
};





class Solution {
public:
   
    bool isBalanced(TreeNode* root) {
        
        return help(root)!=-1;
       
    }
    int help(TreeNode*root){
         if (root == nullptr)
        {return 0;}

    int lh = isBalanced(root->left);
    if (lh == -1)
       { return -1; // Un-balanced tree 
       }

    int rh = isBalanced(root->right);
    if (rh == -1)
        {return -1;}

    if (abs(lh - rh) >= 1)
      {  return -1;}
    else
        {return max(lh, rh) + 1;}
    }
   
};

*/

class Solution {

public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight (root) != -1;
    }

    int dfsHeight (TreeNode *root) {

        if (root == NULL) return 0;
        
        int leftHeight = dfsHeight (root -> left);

        if (leftHeight == -1) 
            return -1;
        
        int rightHeight = dfsHeight (root -> right);

        if (rightHeight == -1) 
            return -1;
        
        if (abs(leftHeight - rightHeight) > 1)  
            return -1;

        return max (leftHeight, rightHeight) + 1;
    }
};






