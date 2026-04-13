# Zigzag Conversion

- Platform: LeetCode
- URL: https://leetcode.com/problems/zigzag-conversion/submissions/1977724922/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 10.79
MB
- Solved At: 2026-04-13T20:53:20.111Z

## Code
```cpp
string result = "";
        int n = s.length();
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