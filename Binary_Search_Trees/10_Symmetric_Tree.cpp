//LC 101
//Approach : Breadth First Search

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
    bool cmp(TreeNode* root1,TreeNode* root2){
        if(!root1 || !root2)  return root1==root2;
        else if(root1 && root2){
            if(root1->val == root2->val){
            return cmp(root1->left,root2->right) && cmp(root1->right,root2->left);
            }
            return false;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        return cmp(root->left,root->right);
        
    }
};
