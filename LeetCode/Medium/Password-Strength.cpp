# Password Strength

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-503/problems/password-strength/submissions/2011263520/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-24T02:39:39.447Z

## Code
```cpp
1class Solution {
2public:
3    int passwordStrength(string p) {
4        int ans=0;
5        unordered_map<char,int> m;
6        for(int i=0;i<p.size();i++){
7            if(m[p[i]]==0){
8                int tmp=p[i];
9                if(tmp>=97 && tmp<=128){
10                    ans++;
11                }
12                else if(tmp>=65 && tmp<=90){
13                    ans+=2;
14                }
15                else if(tmp>=48 && tmp<=57){
16                    ans+=3;
17                }
18                else if(tmp==33 || tmp==35 || tmp==36 || tmp==64){
19                    ans+=5;
20                }
21            }
22            m[p[i]]++;
23        }
24        return ans;
25    }
26};
```