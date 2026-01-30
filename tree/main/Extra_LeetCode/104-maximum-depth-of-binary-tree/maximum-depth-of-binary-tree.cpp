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
    int solve(TreeNode* root, int n){
        if(!root)   return 0;
        int a=solve(root->left,n+1);
        int b=solve(root->right,n+1);
        n=max(a+1,b+1);
        return n;

    }
    int maxDepth(TreeNode* root) {
        int n=1;
        int ans=solve(root,n);
        return ans;
    }
};