# Count the Number of Special Characters II

- Platform: LeetCode
- URL: https://leetcode.com/problems/count-the-number-of-special-characters-ii/submissions/2017419588/?envType=daily-question&envId=2026-05-30
- Difficulty: Medium
- Language: JavaScript
- Status: Accepted
- Runtime: 4 ms
- Memory: 0.00
MB
- Solved At: 2026-05-30T16:51:47.722Z

## Code
```java
if (a[i]==-1 || A[i]==-1) continue;
        for(int i=0; i<26; i++){
        int cnt=0;
            if (c<='Z'){
                if(A[c-'A']==-1) A[c-'A']=i;
            }
            else a[c-'a']=i;
        }
            char c=word[i];
        for(int i=0; i<n; i++){
        memset(a, -1, sizeof(a));
        memset(A, -1, sizeof(A)); 
        const int n=word.size();
public:
    static int numberOfSpecialChars(string& word) {
class Solution {
int a[26], A[26];
```