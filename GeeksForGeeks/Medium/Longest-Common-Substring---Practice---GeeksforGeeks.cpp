# Longest Common Substring | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/longest-common-substring1452/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-05-03T07:14:27.067Z

## Code
```cpp
class Solution {
  public:
  vector<vector<int>> t;
    int solve(string &s1,string &s2, int n,int m){
        if(n==0 || m==0)    return 0;
        if(t[n][m]!=-1)  return t[n][m];
        if(s1[n-1]==s2[m-1])    return t[n][m]=solve(s1,s2,n-1,m-1)+1;
        else{
            return t[n][m]=0;
        }
        
    }
    int longCommSubstr(string &s1, string &s2) {
        int n=s1.length(),m=s2.length();
        t.assign(n+1,vector<int>(m+1,-1));
        int ans=-1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                ans=max(ans,solve(s1,s2,i,j));
            }
        }
        return ans;
    }
};
```