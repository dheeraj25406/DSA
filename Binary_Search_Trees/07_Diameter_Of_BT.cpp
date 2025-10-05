//Approach : Divide into three parts and solve
//LC 543
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
private:
    int height(TreeNode* root){
        if(!root)   return 0;
        return 1+max(height(root->left),height(root->right));
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)   return 0;
        int a=diameterOfBinaryTree(root->left);
        int b=diameterOfBinaryTree(root->right);
        int c=height(root->left)+height(root->right);
        int ans=max(a,max(b,c));
        return ans;
    }
};
