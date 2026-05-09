# 2195B - Heapify 1

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2195/B
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 93 ms
- Memory: 900 KB
- Solved At: 2026-05-09T13:27:22.625Z

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
    // factCompute(1e6);
    // sieve(1e7);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n+1),b(n+1);
        fr(i,1,n+1){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin()+1,b.end());
        ll f=1;
        vector<ll> vis(n+1,0);
        fr(i,1,n+1){
            if(vis[i])  continue;
            ll j=i;
            vector<ll> x,y;
            while(j<=n){
                vis[j]=1;
                x.pb(a[j]);
                y.pb(b[j]);
                j*=2;
            }
            sort(all(x));
            sort(all(y));
            if(x!=y){
                f=0;
                break;
            }
        }
        yn(f);
    }
    return 0;
}
```