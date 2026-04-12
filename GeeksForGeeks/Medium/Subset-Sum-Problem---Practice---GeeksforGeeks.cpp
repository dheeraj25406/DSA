# Subset Sum Problem | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-04-12T08:15:34.085Z

## Code
```cpp
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int s) {
        // code here
        int n=arr.size();
        vector<vector<bool>> t(n+1,vector<bool>(s+1,false));
        for(int i=0;i<n+1;i++)  t[i][0]=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(arr[i-1]<=j){
                    t[i][j]=(t[i-1][j-arr[i-1]]) || (t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
            
            
            
        }
        return t[n][s];
    }
};
```