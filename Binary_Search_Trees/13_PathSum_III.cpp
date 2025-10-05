//LC 437
//Approach : DFS
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
    void solve(TreeNode* root, int targetSum, int &cnt,vector<int> p){
        if(!root)   return;
        p.push_back(root->val);
        solve(root->left,targetSum,cnt,p);
        solve(root->right,targetSum,cnt,p);
        long long s=p.size();
        long long sum=0;
        for(int i=s-1;i>=0;i--){
            sum+=p[i];
            if(sum==targetSum)  cnt++;
        }
        p.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> p;
        int cnt=0;
        solve(root,targetSum,cnt,p);
        return cnt;
    }
};
