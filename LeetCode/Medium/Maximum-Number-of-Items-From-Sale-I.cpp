# Maximum Number of Items From Sale I

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-504/problems/maximum-number-of-items-from-sale-i/submissions/2017720991/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-31T03:07:43.256Z

## Code
```cpp
1class Solution {
2public:
3    int maximumSaleItems(vector<vector<int>>& it, int b) {
4        int n=it.size();
5        vector<int> f(n,1);
6        for(int i=0;i<n;i++){
7            for(int j=0;j<n;j++){
8                if(i!=j && it[j][0]%it[i][0]==0)f[i]++;
9            }
10        }
11        int ans=0;
12        vector<int> t(b+1,0);
13        for(int i=1;i<=n;i++){
14            int p=it[i-1][1];
15            for(int j=b;j>=p;j--){
16                t[j]=max(t[j],t[j-p]+f[i-1]);
17            }
18            for(int j=p;j<=b;j++){
19                t[j]=max(t[j],t[j-p]+1);
20            }
21        }
22        return *max_element(t.begin(),t.end());
23    }
24};
```