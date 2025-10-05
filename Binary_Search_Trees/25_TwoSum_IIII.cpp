//LC 653
//Approach: Hash table, DFS and BFS

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
    void in(TreeNode* root,vector<int> &v){
        if(!root)   return;
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        in(root,v);
        int sum=0;
        int s=0,e=v.size()-1;
        while(s<e){
            if(v[s]+v[e]>k) e--;
            else if(v[s]+v[e]<k)    s++;
            else    return true;
        }
        return false;
    }
};
