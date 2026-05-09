# 2195C - Dice Roll Sequence

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2195/C
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 125 ms
- Memory: 100 KB
- Solved At: 2026-05-09T13:27:21.221Z

## Code
```cpp
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fr(i,s,e) for(ll i = s; i < e; i++)
typedef long long ll;

signed main(){
    fastio();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        fr(i,0,n) cin>>a[i];
        const ll INF=1e18;
        vector<ll>dp(7,INF),ndp(7,INF);
        fr(v,1,7)
            dp[v]=(a[0]!=v);
        fr(i,1,n){
            fr(v,1,7) ndp[v]=INF;
            fr(v,1,7){
                fr(u,1,7){
                    if(u!=v && u+v!=7){
                        ndp[v]=min(ndp[v],dp[u]+(a[i]!=v));
                    }
                }
            }
            dp=ndp;
        }
        ll ans=INF;
        fr(v,1,7) ans=min(ans,dp[v]);
        
        cout<<ans<<"\n";
    }
    return 0;
}
```