# Check if Array is Good

- Platform: LeetCode
- URL: https://leetcode.com/problems/check-if-array-is-good/submissions/2003141221/?envType=daily-question&envId=2026-05-14
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 27.60
MB
- Solved At: 2026-05-14T16:38:41.425Z

## Code
```cpp
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        set<int>st(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        n-=1;
        int act=(n*(n+1))/2;
        act+=n;
        return sum==act && st.size()==n && maxi==n;
    }
};
```