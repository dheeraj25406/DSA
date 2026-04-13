# Rotate Image

- Platform: LeetCode
- URL: https://leetcode.com/problems/rotate-image/submissions/1977726705/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 10.27
MB
- Solved At: 2026-04-13T20:57:04.621Z

## Code
```cpp
int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; ++i) {
            std::reverse(matrix[i].begin(), matrix[i].end());
    void rotate(std::vector<std::vector<int>>& matrix) {
public:
class Solution {
#include <algorithm>
#include <vector>
        }
    }
};
```