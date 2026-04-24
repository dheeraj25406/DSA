# Furthest Point From Origin

- Platform: LeetCode
- URL: https://leetcode.com/problems/furthest-point-from-origin/submissions/1987217940/?envType=daily-question&envId=2026-04-24
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 9.10
MB
- Solved At: 2026-04-24T18:10:33.335Z

## Code
```cpp
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') cnt1++;
            else if(moves[i]=='R')cnt2++;
            else cnt3++;
        }
        if(cnt1>=cnt2) return cnt1+cnt3-cnt2;
        return cnt2+cnt3-cnt1;
    }
};
```