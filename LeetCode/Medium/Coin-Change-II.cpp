# Coin Change II

- Platform: LeetCode
- URL: https://leetcode.com/problems/coin-change-ii/submissions/1978409337/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: N/A
- Solved At: 2026-04-15T20:16:03.746Z

## Code
```cpp
if(amt==0)  return 1;
    }
    int change(int amt, vector<int>& v) {
        int ans=solve(amt,v,v.size(),t);
        else if(n<=0)    return  0;
        return ans;
        return t[n][amt];
        if(amt<0)   return 0;
        vector<vector<int>> t(v.size()+1,vector<int>(amt+1,-1));
        if(t[n][amt]==-1){
            t[n][amt]=solve(amt,v,n-1,t)+solve(amt-v[n-1],v,n,t);
        }
    }
};
    int solve(int amt, vector<int>& v, int n,vector<vector<int>> &t){
public:
class Solution {
```