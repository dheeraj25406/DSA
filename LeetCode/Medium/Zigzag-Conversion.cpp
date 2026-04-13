# Zigzag Conversion

- Platform: LeetCode
- URL: https://leetcode.com/problems/zigzag-conversion/submissions/1977731723/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 3
ms
- Memory: 10.87
MB
- Solved At: 2026-04-13T21:09:07.154Z

## Code
```cpp
int cycle = 2 * (numRows - 1);
        for (int row = 0; row < numRows; row++) {
            for (int j = row; j < n; j += cycle) {
                result += s[j];
                int diag = j + cycle - 2 * row;
                if (row != 0 && row != numRows - 1 && diag < n) {
                    result += s[diag];
                }
            }
        }
        return result;
    }
};
```