# 2204B - Right Maximum

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2204/B
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 78 ms
- Memory: 100 KB
- Solved At: 2026-05-09T13:27:06.355Z

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1),last(n+1),jump(n+1);
        int mx=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            last[a[i]]=i;
            mx=max(mx,a[i]);
            jump[i]=last[mx];
        }
        int len=n,ans=0;
        while(len>0){
            int k=jump[len];
            len=k-1;
            ans++;
        }
        cout<<ans<<"\n";
    }
}
```