# 2225B - Alternating String

- Platform: CodeForces
- URL: https://codeforces.com/problemset/problem/2225/B
- Difficulty: Unknown
- Language: C++
- Status: Accepted
- Runtime: 62 ms
- Memory: 0 KB
- Solved At: 2026-05-09T13:27:16.240Z

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

bool check(string &s,char c){
    int n=s.size(),l=-1,r=-1,cnt=0;

    for(int i=0;i<n;i++){
        char x=(i%2==0?c:(c=='a'?'b':'a'));
        if(s[i]!=x){
            if(l==-1)l=i;
            r=i;
            cnt++;
        }
    }

    if(cnt==0)return true;
    return r-l+1==cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(check(s,'a') || check(s,'b'))cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
```