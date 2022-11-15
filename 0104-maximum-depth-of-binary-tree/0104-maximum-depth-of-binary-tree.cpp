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
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        
        int lf = maxDepth(root->left);
        int rh = maxDepth(root->right);
        
        int res = 1+max(lf,rh);

    
        return res;
    }
};
class Solution2 {
public:
    void maxDepth(TreeNode* root) {
        unordered_map<TreeNode*,TreeNode*>parent;
        
        
        
    }
    private:
    void findParent(TreeNode*node,unordered_map<TreeNode*,TreeNode*>&parent){
        if(node==NULL)return;
        if(node->left){
            parent[node->left]=node;
            findParent(node,parent);
        }
        if(node->right){
            parent[node->right]=node;
            findParent(node,parent);
        }
    }
    // void findLeaf()
};
class Solution3 {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        
        if(root->left==NULL && root->right)return 1;
        if(root->left==nullptr){
            return 1+maxDepth(root->right);
        }
        if(root->right==nullptr){
            return 1+maxDepth(root->left);
        }
        
        else
            return max(maxDepth(root->right),maxDepth(root->right))+1;
    }
};