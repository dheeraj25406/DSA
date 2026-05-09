# 2197B - Array and Permutation

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2197/B
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 125 ms
- Memory: 3000 KB
- Solved At: 2026-05-09T13:27:23.332Z

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

signed main() {
    fastio();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> p(n+1),a(n+1);
        for(ll i=1;i<=n;i++)cin>>p[i];
        for(ll i=1;i<=n;i++)cin>>a[i];
        vector<ll> b;
        for(ll i=1;i<=n;i++){
            if(i==1 || a[i]!=a[i-1]) b.pb(a[i]);
        }
        vector<ll> pos(n+1,0);
        for(ll i=1;i<=n;i++) pos[p[i]] = i;
        bool chk=true;
        ll lst=0;
        for(ll i=0;i<(ll)b.size();i++){
            ll v=b[i];
            if(pos[v] <= lst){ 
                chk=false; break;
            }
            lst = pos[v];
        }
        yn(chk);
    }
    return 0;
}
```