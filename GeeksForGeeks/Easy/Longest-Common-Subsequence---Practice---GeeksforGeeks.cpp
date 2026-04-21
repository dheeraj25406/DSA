# Longest Common Subsequence | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-04-21T20:58:16.027Z

## Code
```cpp
class Solution {
  public:
    int lcs(string &s1, string &s2) {
        // code here
        vector<vector<int>>v(s1.size()+1,vector<int>(s2.size()+1,0));
        int n=s1.size(),m=s2.size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    v[i][j]=v[i-1][j-1]+1;
                }
                else{
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
                }
            }
        }
        return v[n][m];
    }
};
```