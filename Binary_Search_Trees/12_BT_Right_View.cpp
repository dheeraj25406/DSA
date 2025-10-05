//LC 199
//Approach : Using DFS and BFS

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
    void solve(TreeNode* root,vector<int> &v,int lvl){
        if(!root)   return;
        if(v.size()==lvl)   v.push_back(root->val);
        if(root->right) solve(root->right,v,lvl+1);
        if(root->left)  solve(root->left,v,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        solve(root,v,0);
        return v;        
    }
};
