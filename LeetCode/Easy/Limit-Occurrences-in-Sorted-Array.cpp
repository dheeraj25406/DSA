# Limit Occurrences in Sorted Array

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-503/problems/limit-occurrences-in-sorted-array/submissions/2011248159/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-24T02:32:37.424Z

## Code
```cpp
1class Solution {
2public:
3    vector<int> limitOccurrences(vector<int>& nums, int k) {
4        vector<int> v;
5        unordered_map<int,int> m;
6        for(int i=0;i<nums.size();i++){
7            m[nums[i]]++;
8            if(m[nums[i]]<=k){
9                v.push_back(nums[i]);
10            }
11        }
12        return v;
13    }
14};
```