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
    
    TreeNode* util(TreeNode* root,int k,int* ctr){
        if(root==NULL) return NULL;
        
        TreeNode* left=util(root->left,k,ctr);
        
        if(left) return left;
        
        *ctr=*ctr+1;
        if(*ctr==k) return root;
        
        return util(root->right,k,ctr);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ctr=0;
        return util(root,k,&ctr)->val;
    }
};