# Personal submissions

- Platform: CodeForces
- URL: https://codeforces.com/submissions/salaaar
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 78 ms
- Memory: 100 KB
- Solved At: 2026-04-12T14:14:28.884Z

## Code
```cpp
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 #define int long long#define vi vector<ll>#define vvi vector<vi>#define pll pair<ll, ll>#define vp vector<pll>#define fastio() ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL)#define M 1000000007// #define M 998244353#define INF 1e18#define endl "\n"#define pb push_back#define ppb pop_back#define mp make_pair#define ff first#define ss second#define fr(i,s,e) for(ll i = s;
 i < e;
 i++)#define forrr(i,s,e) for(ll i = s;
 i >= e;
 i--)#define sz(x) ((int)(x).size())#define all(x) (x).begin(), (x).end()#define yn(f) f?cout<<"YES\n":cout<<"NO\n"#define syn(f) f?cout<<"Yes\n":cout<<"No\n" typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifdef ONLINE_JUDGE#define debug(x) #else#define debug(x) cerr << #x <<" ";
 _print(x);
 cerr << endl;
#endif   signed main(){
    fastio();
    int t;
cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int>a(n),cur(n,0),lst(n,-1);
        fr(i,0,n) cin>>a[i];
        int tmp=0;
        fr(i,0,n) tmp=max(tmp,a[i]);
        int mx=tmp;
        int id=0;
        fr(i,0,m){
            int b,c;
            cin>>b>>c;
            b--;
            if(lst[b]!=id){
                cur[b]=0;
                lst[b]=id;
            
}
            cur[b]+=c;
            mx=max(mx,a[b]+cur[b]);
            if(mx>h){
                id++;
                mx=tmp;
            
}
        
}
        fr(i,0,n){
            if(lst[i]==id) cout<<a[i]+cur[i]<<" ";
            else cout<<a[i]<<" ";
        
}
        cout<<"\n";
    
}
    return 0;

}
```