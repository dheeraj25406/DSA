# 2227A - Koshary

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2227/A
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 15 ms
- Memory: 0 KB
- Solved At: 2026-05-09T13:27:05.648Z

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