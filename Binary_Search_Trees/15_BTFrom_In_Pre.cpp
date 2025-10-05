//LC 105
//Approach : Divide and Conquer
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
    void create(vector<int> inorder,unordered_map<int,int> &m){
        for(int i=0;i<inorder.size();i++)    m[inorder[i]]=i;
    }

    TreeNode* solve(const vector<int> &inorder,const vector<int> &preorder,int &pidx,int is,int ie,unordered_map<int,int> &m){
        if((pidx>=inorder.size()) || is>ie) return NULL;
        int e=preorder[pidx++];
        TreeNode* tmp=new TreeNode(e);
        int pos=m[e];
        tmp->left=solve(inorder,preorder,pidx,is,pos-1,m);
        tmp->right=solve(inorder,preorder,pidx,pos+1,ie,m);
        return tmp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pi=0;
        unordered_map<int,int> m;
        create(inorder,m);
        TreeNode* ans=solve(inorder,preorder,pi,0,inorder.size()-1,m);
        return ans;
    }
};
