# Minimum Operations to Sort a Permutation

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-503/problems/minimum-operations-to-sort-a-permutation/submissions/2011345965/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-24T03:34:48.037Z

## Code
```cpp
1class Solution {
2public:
3    int minOperations(vector<int>& a) {
4        int n=a.size();
5        {
6            int k=a[0];
7            bool ok=1;
8            for(int j=0;j<n;j++){
9                if(a[j]!=(j+k)%n){
10                    ok=0;
11                    break;
12                }
13            }
14            if(ok)return k==0?0:min(n-k,2+k);
15        }
16        {
17            int k=(a[0]+1)%n;
18            bool ok=1;
19            for(int j=0;j<n;j++){
20                if(a[j]!=(n-1-j+k+n)%n){
21                    ok=0;
22                    break;
23                }
24            }
25            if(ok)return 1+min(k,n-k);
26        }
27        return -1;
28    }
29};
```