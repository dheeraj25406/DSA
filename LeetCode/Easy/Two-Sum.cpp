# Two Sum

- Platform: LeetCode
- URL: https://leetcode.com/problems/two-sum/submissions/1977723504/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 14.68
MB
- Solved At: 2026-04-13T20:50:08.094Z

## Code
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++) {
            int comp = target-nums[i];
            if (num_map.find(comp) != num_map.end()) {
                return {num_map[comp], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};
```