# Two Furthest Houses With Different Colors

- Platform: LeetCode
- URL: https://leetcode.com/problems/two-furthest-houses-with-different-colors/submissions/1983994148/?envType=daily-question&envId=2026-04-20
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0
ms
- Memory: 12.17
MB
- Solved At: 2026-04-20T22:45:14.111Z

## Code
```cpp
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(colors[i] != colors[0])
                ans = max(ans, i);
            if(colors[i] != colors[n-1])
                ans = max(ans, n-1-i);
        }
        return ans;
    }
};
```