# Sum of Distances

- Platform: LeetCode
- URL: https://leetcode.com/problems/sum-of-distances/submissions/1986540464/?envType=daily-question&envId=2026-04-23
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 80
ms
- Memory: 109.38
MB
- Solved At: 2026-04-23T22:11:10.349Z

## Code
```cpp
pair<ll,ll> prev = suff[nums[i]];
                suff[nums[i]] = {prev.first+i, prev.second+1};
            }
            else suff[nums[i]] = {i, 1};
        }
        int n = nums.size();
        vector<ll> ans(n);
        unordered_map<int,pair<ll,ll>> pref, suff;
        for(int i=0; i<n; i++) 
        {
            if(suff.find(nums[i])!=suff.end()) 
            {
typedef long long ll;
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
```