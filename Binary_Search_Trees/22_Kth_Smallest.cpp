//LC 230
//Apperoach: DFS
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
    void solve(TreeNode* root, int k, int &tmp, int &ans){
        if(!root)   return;
        solve(root->left,k,tmp,ans);
        tmp++;
        if(tmp==k){
            ans=root->val;
            return;
        }
        solve(root->right,k,tmp,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int tmp=0;
        int ans;
        solve(root,k,tmp,ans);
        return ans;        
    }
};
