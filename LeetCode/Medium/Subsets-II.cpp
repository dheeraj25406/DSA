# Subsets II

- Platform: LeetCode
- URL: https://leetcode.com/problems/subsets-ii/submissions/1993559979/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 3 ms
- Memory: 10.4 MB
- Solved At: 2026-05-02T18:33:19.126Z

## Code
```cpp
1class Solution {
2public:
3    void solve(vector<int>& nums,vector<vector<int>>& ans,int n, vector<int>& tmp){
4        ans.push_back(tmp);
5        for(int i=n;i<nums.size();i++){
6            if(i>n && nums[i]==nums[i-1])   continue;
7            tmp.push_back(nums[i]);
8            solve(nums,ans,i+1,tmp);
9            tmp.pop_back();
10        }
11    }
12    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
13        sort(nums.begin(),nums.end());
14        vector<vector<int>> ans;
15        vector<int> tmp;
16        solve(nums,ans,0,tmp);
17        return ans;
18    }
19};
```