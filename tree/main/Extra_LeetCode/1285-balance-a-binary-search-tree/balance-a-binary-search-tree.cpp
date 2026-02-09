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
    TreeNode* solve(vector<int>& v, int s,int e){
        if(s>e) return nullptr;
        int m=s+(e-s)/2;
        TreeNode* root=new TreeNode(v[m]);
        root->left=solve(v,s,m-1);
        root->right=solve(v,m+1,e);
        return root;
    }
    void gett(TreeNode* root,vector<int>& v){
        if(!root)   return;
        gett(root->left,v);
        v.push_back(root->val);
        gett(root->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        gett(root,v);
        TreeNode* ans=solve(v,0,v.size()-1);
        return ans;
    }
};