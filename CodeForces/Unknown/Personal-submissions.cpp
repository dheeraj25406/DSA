# Personal submissions

- Platform: CodeForces
- URL: https://codeforces.com/submissions/salaaar
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 78 ms
- Memory: 100 KB
- Solved At: 2026-04-12T10:55:23.413Z

## Code
```cpp
#include<bits/stdc++.h>using namespace std;#define ll long long ll f(vector<ll>&tmp,ll S,ll h,ll n,ll k){    if(h<=0) return 0;    ll ans=4e18;     for(ll i=1;i<=n;i++){        if(tmp[i]>=h){            ans=min(ans,i);            break;        }    }    if(S<=0) return ans;    ll temp=(h-1)/S;    for(ll f=max(0LL,temp-5);f<=temp+5;f++){        ll d=f*S;        if(d>=h){            ll t=f*n+max(0LL,f-1)*k;            ans=min(ans,t);            continue;        }        ll ttmp=h-d;        auto it=lower_bound(tmp.begin()+1,tmp.begin()+n+1,ttmp);        if(it!=tmp.begin()+n+1){            ll r=it-tmp.begin();            ll t=f*n+r+f*k;            ans=min(ans,t);        }    }    return ans;} int main(){    ios::sync_with_stdio(false);    cin.tie(0);     int t;cin>>t;    while(t--){        ll n,h,k;cin>>n>>h>>k;        vector<ll>a(n);        for(auto &x:a) cin>>x;        vector<ll>p(n+1);        for(int i=1;i<=n;i++) p[i]=p[i-1]+a[i-1];        ll S=p[n];        vector<ll>s(n+1,-4e18);        for(int i=n-1;i>=0;i--) s[i]=max(a[i],s[i+1]);        vector<ll>tmp(n+1);        ll mn=4e18;        for(int len=1;len<=n;len++){            mn=min(mn,a[len-1]);            tmp[len]=p[len];            if(s[len]>mn)                tmp[len]=p[len]-mn+s[len];        }         ll ans=f(tmp,S,h,n,k);        cout<<ans<<"
";    }}
```