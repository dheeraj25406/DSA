# Maximum Sum of M Non-Overlapping Subarrays I

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-505/problems/maximum-sum-of-m-non-overlapping-subarrays-i/submissions/2024871586/
- Difficulty: Hard
- Language: JavaScript
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-06-07T02:47:31.333Z

## Code
```java
1class Solution {
2public:
3    long long maximumSum(vector<int>& a, int m, int l, int r) {
4        int n=a.size();
5        vector<long long> p(n+1,0);
6        for(int i=1;i<=n;i++)p[i]=p[i-1]+a[i-1];
7        const long long INF=-(1e18);
8        vector<vector<long long>> dp(n+1,vector<long long>(m+1,INF));
9        for(int i=0;i<=n;i++)dp[i][0]=0;
10        for(int j=1;j<=m;j++){
11            deque<int> dq;
12            for(int i=1;i<=n;i++){
13                if(i-l>=0){
14                    int idx=i-l;
15                    long long val=dp[idx][j-1]-p[idx];
16                    while(!dq.empty() && (dp[dq.back()][j-1]-p[dq.back()])<=val)dq.pop_back();
17                    dq.push_back(idx);
18                }
19                if(i-r-1>=0 && !dq.empty() && dq.front()==i-r-1)dq.pop_front();
20                dp[i][j]=dp[i-1][j];
21                if(!dq.empty()){
22                    int t=dq.front();
23                    dp[i][j]=max(dp[i][j],p[i]+(dp[t][j-1]-p[t]));
24                }
25            }
26        }
27        long long ans=INF;
28        for(int j=1;j<=m;j++)ans=max(ans,dp[n][j]);
29        return ans;
30    }
31};
```