//LC 1382
//Approach: Divide and Conquer
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
    void inorder(TreeNode* root,vector<int> &v){
        if(!root)   return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* solve(int s,int e,vector<int> &v){
        if(s>e) return NULL;
        int mid=s+(e-s)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=solve(s,mid-1,v);
        root->right=solve(mid+1,e,v);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        TreeNode* ans=solve(0,v.size()-1,v);
        return ans;
    }
};
