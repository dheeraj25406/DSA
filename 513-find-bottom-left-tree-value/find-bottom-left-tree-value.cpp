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
    int tmp=0;
    int ans=0;
    void solve(TreeNode* r,int d){
        if(r==NULL) return;
        solve(r->left,d+1);
        if(d>tmp){
            tmp=d;
            ans=r->val;
        }
        solve(r->right,d+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        solve(root,0);
        return ans;
    }
};