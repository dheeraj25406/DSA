# Valid Binary Strings With Cost Limit

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-505/problems/valid-binary-strings-with-cost-limit/submissions/2024856891/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 33.90
MB
- Solved At: 2026-06-07T02:40:14.109Z

## Code
```cpp
1class Solution {
2public:
3    vector<string> ans;
4    void dfs(int i,int n,int k,int p,int c,string& s){
5        if(c>k)return;
6        if(i==n){
7            ans.push_back(s);
8            return;
9        }
10        s.push_back('0');
11        dfs(i+1,n,k,0,c,s);
12        s.pop_back();
13        if(p==0){
14            s.push_back('1');
15            dfs(i+1,n,k,1,c+i,s);
16            s.pop_back();
17        }
18    }
19    vector<string> generateValidStrings(int n, int k) {
20        ans.clear();
21        string s="";
22        dfs(0,n,k,0,0,s);
23        return ans;
24    }
25};
```