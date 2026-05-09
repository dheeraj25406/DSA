# Status

- Platform: CodeForces
- URL: https://codeforces.com/problemset/status?my=on
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 15 ms
- Memory: 0 KB
- Solved At: 2026-05-09T13:04:55.533Z

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
        int x,y;
        cin>>x>>y;
         if(x%2==1 && y%2==1)   cout<<"NO\n";
        else    cout<<"YES\n";
    
}
     return 0;

}
```