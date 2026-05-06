# Rotating the Box

- Platform: LeetCode
- URL: https://leetcode.com/problems/rotating-the-box/submissions/1996855447/?envType=daily-question&envId=2026-05-06
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 56.88
MB
- Solved At: 2026-05-06T18:50:23.336Z

## Code
```cpp
if (box[i][j] == '*') e = j - 1;
                else if (box[i][j] == '#') {
                    box[i][j] = '.';
                    box[i][e] = '#';
                    e--;
                }
            }
            for (int j = n - 1; j >= 0; j--) {
            int e = n - 1;
        for (int i = 0; i < m; i++) {
        int m = box.size(), n = box[0].size();
        vector<vector<char>> res(n, vector<char>(m));
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
class Solution {
public:
        }
        for (int i = 0; i < m; i++)
```