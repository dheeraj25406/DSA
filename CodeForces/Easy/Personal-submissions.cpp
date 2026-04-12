# Personal submissions

- Platform: CodeForces
- URL: https://codeforces.com/submissions/salaaar
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 78 ms
- Memory: 100 KB
- Solved At: 2026-04-12T11:08:22.695Z

## Code
```cpp
#include <bits/stdc++.h>
using namespace std;
 class Solution{
public:    long long lcm2(long long a,long long b){
        return a/__gcd(a,b)*b;
    
}
        void solve(){
        int t;
cin>>t;
        while(t--){
            long long a,b,c,m;
cin>>a>>b>>c>>m;
            long long A=m/a,B=m/b,C=m/c;
            long long ab=lcm2(a,b);
            long long ac=lcm2(a,c);
            long long bc=lcm2(b,c);
            long long abc=lcm2(ab,c);
            long long AB=m/ab,AC=m/ac,BC=m/bc,ABC=m/abc;
            long long onlyA=A-AB-AC+ABC;
            long long onlyB=B-AB-BC+ABC;
            long long onlyC=C-AC-BC+ABC;
            long long AB2=AB-ABC;
            long long AC2=AC-ABC;
            long long BC2=BC-ABC;
            long long ansA=onlyA*6+AB2*3+AC2*3+ABC*2;
            long long ansB=onlyB*6+AB2*3+BC2*3+ABC*2;
            long long ansC=onlyC*6+AC2*3+BC2*3+ABC*2;
                    cout<<ansA<<" "<<ansB<<" "<<ansC<<"\n";
        
}
    
}

}
;
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     Solution s;
    s.solve();

}
```