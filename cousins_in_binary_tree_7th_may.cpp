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
    pair<TreeNode*,int> a,b;
    
    void util(TreeNode* root,TreeNode* p,int lvl,int x,int y){
        if(root==NULL) return ;
        
        if(root->val==x) a={p,lvl};
        else if(root->val==y) b={p,lvl};
        
        util(root->left,root,lvl+1,x,y);
        util(root->right,root,lvl+1,x,y);

    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        util(root,NULL,0,x,y);
        if(a.second==b.second && a.first!=b.first) return true;
        else return false;
            
    }
};