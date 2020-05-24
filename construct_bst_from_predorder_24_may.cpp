/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* util(vector<int>& preorder,int n,int* idx,int mn,int mx){
        if(*idx>=n) return NULL;
        
        int key=preorder[*idx];
        TreeNode* root=NULL;
        
        if(key>mn && key<mx){
            root=new TreeNode(key);
            *idx=*idx+1;
            
            root->left=util(preorder,n,idx,mn,key);
            root->right=util(preorder,n,idx,key,mx);
            
        }
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        int idx=0;
        return util(preorder,n,&idx,INT_MIN,INT_MAX);
        
    }
};