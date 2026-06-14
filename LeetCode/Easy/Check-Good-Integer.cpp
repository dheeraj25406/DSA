# Check Good Integer

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-506/problems/check-good-integer/submissions/2032262365/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 7.84
MB
- Solved At: 2026-06-14T02:31:58.075Z

## Code
```cpp
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        int ds=0;
5        int ss=0;
6        
7        int tmp=n;
8        while(tmp>0){
9            int k=tmp%10;
10            ds+=k;
11            ss+=k*k;
12            tmp/=10;
13        }
14        if(ss-ds>=50)return true;
15        return false;
16    }
17};
```