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
    unordered_map<TreeNode*, long long> mp;
    long long totalSum = 0;
    long long ans = 0;
    long long MOD = 1e9 + 7;
public:

    int findSum(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        totalSum += root->val;
        
        long long val = root->val + findSum(root->left) + findSum(root->right);
        
        return mp[root] = val;
    }
    
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }
        
        if(root->left){
            long long s1 = totalSum - mp[root->left];
            long long s2 = mp[root->left];
            
            ans = max(ans, s1*s2);
            
            solve(root->left);
        }
        
        if(root->right){
            long long s1 = totalSum - mp[root->right];
            long long s2 = mp[root->right];
            
            ans = max(ans, s1*s2);
            
            solve(root->right);
        }
    }

    int maxProduct(TreeNode* root) {
        findSum(root);
        
        solve(root);
        
        return ans % MOD;
    }
};