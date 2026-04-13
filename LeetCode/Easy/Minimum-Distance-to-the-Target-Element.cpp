# Minimum Distance to the Target Element

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-distance-to-the-target-element/solutions/7884482/two-different-approaches-video-solution-pbplu/?envType=daily-question&envId=2026-04-13
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0ms
- Memory: N/A
- Solved At: 2026-04-13T06:35:12.042Z

## Code
```cpp
class Solution {
public:
    int getMinDistance(vector<int>& n, int t, int s) {
        int ans=INT_MAX;
        for(int i=0;i<n.size();i++){
            if(n[i]==t){
                if(ans==INT_MAX)    ans=i;
            }
        }
                else if(abs(i-s)<abs(ans-s)) ans=i;
    }
        return abs(ans-s);
};
```