# Count the Number of Special Characters I

- Platform: LeetCode
- URL: https://leetcode.com/problems/count-the-number-of-special-characters-i/submissions/2013573081/?envType=daily-question&envId=2026-05-26
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 9.57
MB
- Solved At: 2026-05-26T11:50:03.138Z

## Code
```cpp
count++;
            }
        }
        return count;
    }
};
        unordered_set<char> st(word.begin(), word.end());
        int count = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) {
            if(st.count(ch) && st.count(ch - 'a' + 'A')) {
    int numberOfSpecialChars(string word) {
public:
class Solution {
```