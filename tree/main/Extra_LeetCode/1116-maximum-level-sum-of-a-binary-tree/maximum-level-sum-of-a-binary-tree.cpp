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
    void solve(TreeNode* root,map<int,int>& m,int k){
        if(!root)   return;
        m[k]+=root->val;
        solve(root->left,m,k+1);
        solve(root->right,m,k+1);
    }
    int maxLevelSum(TreeNode* root) {
        map<int,int> m;
        solve(root,m,1);
        int ans=-1e8;
        int tmp;
        for(auto& p:m){
            if(p.second>ans){
                ans=p.second;
                tmp=p.first;
            }
        }
        return tmp;
    }
};