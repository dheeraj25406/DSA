# Number of Ways to Assign Edge Weights I

- Platform: LeetCode
- URL: https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-i/submissions/2029578242/?envType=daily-question&envId=2026-06-11
- Difficulty: Medium
- Language: JavaScript
- Status: Accepted
- Runtime: 0 ms
- Memory: 332.92
MB
- Solved At: 2026-06-11T09:46:10.850Z

## Code
```java
mx = max(mx, 1 + dfs(child, node, adj));
            if (child != parent) {
        for (int child : adj[node]) {
        int mx = 0;
    int dfs(int node, int parent, vector<vector<int>>& adj) {
    }
        return res;
            b >>= 1;
        }
            a = a * a % MOD;
        while (b) {
            if (b & 1) res = res * a % MOD;
    long long modPow(long long a, long long b) {
        long long res = 1;
class Solution {
public:
    static const long long MOD = 1000000007;
```