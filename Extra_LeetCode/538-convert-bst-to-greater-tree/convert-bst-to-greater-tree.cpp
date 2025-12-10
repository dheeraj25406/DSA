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
    int s=0;
    void summ(TreeNode* r){
        if(r==NULL)  return;
        s+=r->val;
        summ(r->right);
        summ(r->left);
    }
    void solve(TreeNode* r,int &tmp){
        if(r==NULL)  return;
        solve(r->left,tmp);
        int c=r->val;
        r->val=s-tmp;
        tmp+=c;
        solve(r->right,tmp);
    }
    TreeNode* convertBST(TreeNode* root) {
        summ(root);
        int tmp=0;
        solve(root,tmp);
        return root;
    }
};