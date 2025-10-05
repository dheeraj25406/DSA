//LC 46
//Approach: Backtracking
class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int>& nums,int n){
        if(n==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=n;j<nums.size();j++){
            swap(nums[n],nums[j]);
            solve(ans,nums,n+1);
            swap(nums[n],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
};
