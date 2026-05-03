# Longest Common Subsequence

- Platform: LeetCode
- URL: https://leetcode.com/problems/longest-common-subsequence/submissions/1993969893/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 27.70
MB
- Solved At: 2026-05-03T07:16:55.433Z

## Code
```cpp
class Solution {
public:
    vector<vector<int>> t;
    int solve(string &s1,string &s2, int n,int m){
        if(n==0 || m==0)    return 0;
        if(t[n][m]!=-1)  return t[n][m];
        if(s1[n-1]==s2[m-1])    return t[n][m]=solve(s1,s2,n-1,m-1)+1;
        else    return t[n][m]=max(solve(s1,s2,n-1,m),solve(s1,s2,n,m-1));
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        t.assign(n+1,vector<int>(m+1,-1));
        int ans=solve(s1,s2,n,m);
    }
        return ans;
};
```