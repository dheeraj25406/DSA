# 2195D - Absolute Cinema

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2195/D
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 171 ms
- Memory: 900 KB
- Solved At: 2026-05-09T13:27:20.478Z

## Code
```cpp
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<ll>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define endl "\n"

typedef long long ll;

signed main(){
    fastio();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>f(n+1);
        fr(i,1,n+1) cin>>f[i];
        ll S=(f[1]+f[n])/(n-1);
        vector<ll>a(n+1,0);
        ll p=0,pp=0;
        fr(x,1,n){
            ll d=f[x+1]-f[x];
            p=(d+S)/2;
            if(x==1) a[1]=p;
            else a[x]=p-pp;
            pp=p;
        }
        a[n]=S-pp;
        fr(i,1,n+1){
            if(i>1) cout<<" ";
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
```