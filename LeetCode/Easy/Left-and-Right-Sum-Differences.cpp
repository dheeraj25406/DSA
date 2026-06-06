# Left and Right Sum Differences

- Platform: LeetCode
- URL: https://leetcode.com/problems/left-and-right-sum-differences/submissions/2024267297/?envType=daily-question&envId=2026-06-06
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0
ms
- Memory: 15.07
MB
- Solved At: 2026-06-06T13:37:21.346Z

## Code
```cpp
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n,0);
        vector<int>suffixSum(n,0);
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+nums[i+1];
        }
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            result[i]=abs(prefixSum[i]-suffixSum[i]);
        }
        return result;
```