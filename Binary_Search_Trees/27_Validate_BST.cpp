//LC 98
//Approach : DFS using Recursion

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
    bool solve(TreeNode* root,long a,long b){
        if(!root)   return true;
        if(root->val<=a || root->val>=b)    return false;
        return solve(root->left,a,root->val) && solve(root->right,root->val,b);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MIN,LONG_MAX);
    }
};
