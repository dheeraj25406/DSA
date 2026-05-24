# Longest Palindromic Substring

- Platform: LeetCode
- URL: https://leetcode.com/problems/longest-palindromic-substring/submissions/2012001477/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 7
ms
- Memory: 9.45
MB
- Solved At: 2026-05-24T18:58:26.702Z

## Code
```cpp
int n=s.size(),l=0,r=0;
        auto expand=[&](int i,int j){
            while(i>=0&&j<n&&s[i]==s[j])i--,j++;
            return j-i-1;
        };
        for(int i=0;i<n;i++){
            int len1=expand(i,i);
            int len2=expand(i,i+1);
            int len=max(len1,len2);
            if(len>r-l){
                l=i-(len-1)/2;
                r=i+len/2;
            }
        }
    string longestPalindrome(string s) {
class Solution {
public:
```