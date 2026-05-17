# Check Adjacent Digit Differences

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-502/problems/check-adjacent-digit-differences/submissions/2005017674/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 8.51
MB
- Solved At: 2026-05-17T02:32:19.457Z

## Code
```cpp
1class Solution {
2public:
3    bool isAdjacentDiffAtMostTwo(string s) {
4        bool ans=true;
5        for(int i=0;i<s.size()-1;i++){
6            int a=s[i]-'0';
7            int b=s[i+1]-'0';
8            if(abs(b-a)>2){
9                return false;
10            }
11        }
12        return ans;
13    }
14};
```