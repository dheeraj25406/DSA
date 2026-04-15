# Shortest Distance to Target String in a Circular Array

- Platform: LeetCode
- URL: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/submissions/1979545116/?envType=daily-question&envId=2026-04-15
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 18.20
MB
- Solved At: 2026-04-15T20:17:39.140Z

## Code
```cpp
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if (words[i] == target) { 
                int d = abs(i-startIndex);
                ans = min(ans,min(d,n-d));
            }
        }
        return ans==1e9?-1:ans;
    }
        int ans = 1e9;
};
```