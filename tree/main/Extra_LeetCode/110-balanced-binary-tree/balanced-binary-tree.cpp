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
    bool tmp=true;
    int solve(TreeNode* root){
        if(!root)   return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        if(abs(a-b)>1)  tmp=false;
        return max(a+1,b+1);
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return tmp;
    }
};