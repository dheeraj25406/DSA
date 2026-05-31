# Digit Frequency Score

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-504/problems/digit-frequency-score/submissions/2017673743/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 8.53
MB
- Solved At: 2026-05-31T02:31:50.354Z

## Code
```cpp
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int s=0;
5        while(n>0){
6            s+=n%10;
7            n/=10;
8        }
9        return s;
10    }
11};
```