//LC 110
//Approach: Using depth first search
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
    pair<int,bool> Bala(TreeNode* root){
        if(!root){
            pair<int,bool> p=make_pair(0,true);
            return p;
        }
        pair<int,bool> l=Bala(root->left);
        pair<int,bool> r=Bala(root->right);
        bool tmp;
        int x=l.first,y=r.first;
        if(abs(x-y)>1 || (!l.second || !r.second))  tmp=false;
        else    tmp=true;
        pair<int,bool> ans;
        ans.first=1+max(l.first,r.first);
        ans.second=tmp;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        return Bala(root).second;
    }
};
