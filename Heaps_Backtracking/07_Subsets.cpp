//LC 78
//Approach : Baacktracking
class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans,int n,vector<int>& tmp){
        ans.push_back(tmp);
        for(int i=n;i<nums.size();i++){
            tmp.push_back(nums[i]);
            solve(nums,ans,i+1,tmp);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        solve(nums,ans,0,tmp);
        return ans;
    }
};
