# 2181H - Honey Cake

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2181/H
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 46 ms
- Memory: 0 KB
- Solved At: 2026-05-09T13:27:27.837Z

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

signed main() {
    fastio();

    int x=0,y=0,z=0;
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;

    int g;

    g=__gcd(a,n);
    int p=g;
    n/=g;

    g=__gcd(b,n);
    int q=g;
    n/=g;

    g=__gcd(c,n);
    int r=g;
    n/=g;

    if(n>1){
        cout<<-1;
        return 0;
    }

    x=p-1;
    y=q-1;
    z=r-1;

    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
```