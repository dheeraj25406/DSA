//LC 106
//Approach: Divide and Conquer, Hash Table
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
    TreeNode* solve(const vector<int> &inorder,const vector<int> &postorder,int &pidx,int is,int ie,unordered_map<int,int> &m){
        if(pidx>inorder.size() || is>ie)    return NULL;
        int e=postorder[pidx--];
        TreeNode* tmp=new TreeNode(e);
        int pos=m[e];
        tmp->right=solve(inorder,postorder,pidx,pos+1,ie,m);
        tmp->left=solve(inorder,postorder,pidx,is,pos-1,m);
        return tmp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> m;
        create(inorder,m);
        int pidx=postorder.size()-1;
        TreeNode* ans=solve(inorder,postorder,pidx,0,inorder.size()-1,m);
        return ans;
    }
};
