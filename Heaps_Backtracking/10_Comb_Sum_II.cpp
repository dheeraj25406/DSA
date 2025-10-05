//LC 40
//Approach : Backtracking
class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& tmp,int target,int n){
        int sum=0;
        for(int k=0;k<tmp.size();k++){
            sum+=tmp[k];
        }
        if(sum>target)  return;
        if(sum==target){
            ans.push_back(tmp);
        }
        for(int i=n;i<candidates.size();i++){
            if(i>n && candidates[i]==candidates[i-1])   continue;
            tmp.push_back(candidates[i]);
            solve(candidates,ans,tmp,target,i+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        solve(candidates,ans,tmp,target,0);
        return ans;
    }
};
