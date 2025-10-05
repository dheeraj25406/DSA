//LC 450
//Approach: Recursion
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)   return NULL;
        else if(root->val==key){
                if(!root->left && !root->right){
                    delete root;
                    return NULL;
                }
                else if(!root->left && root->right){
                    TreeNode* tmp=root->right;
                    delete root;
                    return tmp;
                }
                else if(root->left && !root->right){
                    TreeNode* tmp=root->left;
                    delete root;
                    return tmp;
                }
                else{
                    TreeNode* s=root->right;
                    while(s->left)  s=s->left;
                    int mini=s->val;
                    root->val=mini;
                    root->right=deleteNode(root->right,mini);
                    return root;
                }
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
            return root;
        }
        else{
            root->right=deleteNode(root->right,key);
            return root;
        }
    }
};
