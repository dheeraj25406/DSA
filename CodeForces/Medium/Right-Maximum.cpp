# Right Maximum

- Platform: CodeForces
- URL: https://codeforces.com/contest/2204/problem/B
- Difficulty: Medium
- Language: C++17 (GCC 7-32)
- Status: Accepted
- Tags: N/A
- Runtime: 78 ms
- Memory: 100 KB
- Solved At: 2026-04-07T16:45:04.642Z

## Notes
No notes added.

## Solution
```
#include <bits/stdc++.h>using namespace std; int main(){    ios::sync_with_stdio(false);    cin.tie(NULL);    int t;    cin>>t;    while(t--){        int n;        cin>>n;        vector<int>a(n+1),last(n+1),jump(n+1);        int mx=0;        for(int i=1;i<=n;i++){            cin>>a[i];            last[a[i]]=i;            mx=max(mx,a[i]);            jump[i]=last[mx];        }        int len=n,ans=0;        while(len>0){            int k=jump[len];            len=k-1;            ans++;        }        cout<<ans<<"\n";    }}
```
