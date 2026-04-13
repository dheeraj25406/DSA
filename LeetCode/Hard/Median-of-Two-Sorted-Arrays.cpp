# Median of Two Sorted Arrays

- Platform: LeetCode
- URL: https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1977731442/
- Difficulty: Hard
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 95.2 MB
- Solved At: 2026-04-13T21:08:25.425Z

## Code
```cpp
# If k is in the right half of A + B,
remove the larger right half.             if a_index + b_index < k:                 if a_value > b_value:                     return solve(k,
a_start,
a_end,
b_index + 1,
b_end)                 else:                     return solve(k,
a_index + 1,
a_end,
b_start,
b_end)
```