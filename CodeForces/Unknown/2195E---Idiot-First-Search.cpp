# 2195E - Idiot First Search

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2195/E
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 250 ms
- Memory: 10700 KB
- Solved At: 2026-05-09T13:27:19.776Z

## Code
```cpp
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<ll>
#define vvi vector<vi>
#define pll pair<ll, ll>
#define vp vector<pll>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1000000007
// #define M 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define fr(i,s,e) for(ll i = s; i < e; i++)
#define forrr(i,s,e) for(ll i = s; i >= e; i--)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define syn(f) f?cout<<"Yes\n":cout<<"No\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifdef ONLINE_JUDGE
#define debug(x) 
#else
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#endif



signed main(){
    fastio();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        vector<ll>l(n+1),r(n+1);
        fr(i,1,n+1) cin>>l[i]>>r[i];
        
        vector<ll>par(n+1,0);
        fr(i,1,n+1){
            if(l[i]) par[l[i]]=i;
            if(r[i]) par[r[i]]=i;
        }
        
        vector<ll>f(n+1,0),d(n+1,0);
        queue<ll>q;
        
        fr(i,1,n+1){
            if(!l[i] && !r[i]){
                f[i]=1;
                q.push(i);
            }
        }
        
        while(!q.empty()){
            ll u=q.front(); q.pop();
            ll p=par[u];
            if(!p) continue;
            d[p]++;
            if(d[p]==2){
                f[p]=f[l[p]]+f[r[p]]+3;
                q.push(p);
            }
        }
        
        vector<ll>ans(n+1,0);
        ans[1]=f[1]%M;
        
        queue<ll>q2;
        q2.push(1);
        
        while(!q2.empty()){
            ll u=q2.front(); q2.pop();
            
            if(l[u]){
                ll c=l[u];
                ans[c]=(ans[u]+f[c])%M;
                q2.push(c);
            }
            if(r[u]){
                ll c=r[u];
                ans[c]=(ans[u]+f[c])%M;
                q2.push(c);
            }
        }
        
        fr(i,1,n+1){
            if(i>1) cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
```