# Minimum Flips to Make Binary String Coherent

- Platform: LeetCode
- URL: https://leetcode.com/contest/biweekly-contest-182/problems/minimum-flips-to-make-binary-string-coherent/submissions/1998901223/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-09T14:43:24.851Z

## Code
```cpp
1class Solution {
2public:
3    int minFlips(string s) {
4        int one=0,zer=0;
5        for(int i=0;i<s.size();i++){
6            if(s[i]=='1'){
7                one++;
8            }
9            else{
10                zer++;
11            }
12        }
13        int n=s.size();
14        int ans=max(0,one-1);
15        ans=min(ans,zer);
16        if(n>=2){
17            int tmp=0;
18            for(int i=1;i<n-1;i++){
19                if(s[i]=='1')tmp++;
20            }
21            int cst=tmp+(s[0]!='1')+(s[n-1]!='1');
22            ans=min(ans,cst);
23        }
24        return ans;
25        
26    }
27};
```