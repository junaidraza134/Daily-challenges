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
    void foundpath(TreeNode* root,vector<TreeNode*> &path,TreeNode* p){
        if(root==nullptr) return;
        path.push_back(root);
        if(root==p) return;
        if(p->val<root->val){
            foundpath(root->left,path,p);

        }
        if(p->val>=root->val){
            foundpath(root->right,path,p);
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathp;
        vector<TreeNode*> pathq;
        foundpath(root,pathp,p);
        foundpath(root,pathq,q);
        TreeNode* ans=nullptr;
        int n=min(pathp.size(),pathq.size());
        for(int i=0;i<n;i++){
            if(pathp[i]==pathq[i]){
                ans=pathp[i];
            }
        }
        return ans;


    }
};