# 2185B - Prefix Max

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2185/B
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 46 ms
- Memory: 100 KB
- Solved At: 2026-05-09T13:27:26.437Z

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

long long solve(vector<long long>& a){
    long long mx=0;
    long long ans=0;
    for(long long x:a){
        mx=max(mx,x);
        ans+=mx;
    }
    return ans;
}


signed main() {
    fastio();
    // factCompute(1e6);
    // sieve(1e7);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        fr(i,0,n)   cin>>a[i];
        long long ans=solve(a);
        fr(i,0,n){
            fr(j,i+1,n){
                swap(a[i],a[j]);
                ans=max(ans,solve(a));
                swap(a[i],a[j]);
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;

}
```