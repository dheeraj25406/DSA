//LC 39
//Approach : Backtracking

class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& tmp,int target, int n){
        int sm=0;
        for(auto it:tmp)    sm+=it;
        if(sm>target)   return;
        if(sm==target)  ans.push_back(tmp);
        for(int i=n;i<candidates.size();i++){
            tmp.push_back(candidates[i]);
            solve(candidates,ans,tmp,target,i);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        solve(candidates,ans,tmp,target,0);
        return ans;
    }
};
