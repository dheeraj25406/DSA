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
    long long sm=0,ans=0;
    long long som(TreeNode* root){
        if(!root)   return 0;
        return root->val+som(root->left)+som(root->right);
    }
    int solve(TreeNode* root){
        if(!root)   return 0;
        long long tmp=root->val+solve(root->left)+solve(root->right);
        ans=max(ans,tmp*(sm-tmp));
        return tmp;
    }
    int maxProduct(TreeNode* root) {
        sm=som(root);
        solve(root);
        return ans%1000000007;
    }
};