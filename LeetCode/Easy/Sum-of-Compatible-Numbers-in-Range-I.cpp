# Sum of Compatible Numbers in Range I

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-505/problems/sum-of-compatible-numbers-in-range-i/submissions/2024835851/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 8.68
MB
- Solved At: 2026-06-07T02:32:22.741Z

## Code
```cpp
1class Solution {
2public:
3    int sumOfGoodIntegers(int n, int k) {
4        int s=0;
5        int lb=max(1,n-k);
6        int ub=n+k;
7        for(int x=lb;x<=ub;x++){
8            if((n&x)==0){
9                s+=x;
10            }
11        }
12        return s;
13    }
14};
```