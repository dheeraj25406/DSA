# Status

- Platform: CodeForces
- URL: https://codeforces.com/problemset/status?my=on
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 31 ms
- Memory: 0 KB
- Solved At: 2026-05-09T13:41:39.878Z

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
     while(t--){
        long long x,y;
        cin>>x>>y;
         if(y/x>=3)cout<<"YES\n";
        else cout<<"NO\n";
    
}
     return 0;

}
```