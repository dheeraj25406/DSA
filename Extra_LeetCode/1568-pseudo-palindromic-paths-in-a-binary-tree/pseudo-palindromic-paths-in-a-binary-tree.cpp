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
    int ans=0;
    void dfs(TreeNode* r,int m){
        if(!r)return;
        m^=1<<(r->val);
        if(!r->left && !r->right){
            if((m&(m-1))==0)ans++;
            return;
        }
        dfs(r->left,m);
        dfs(r->right,m);
    }
    int pseudoPalindromicPaths (TreeNode* r) {
        dfs(r,0);
        return ans;
    }
};
