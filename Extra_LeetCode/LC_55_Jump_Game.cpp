# Problem: Jump Game
# LeetCode: https://leetcode.com/problems/jump-game/
# Approach: Greedy (max reachable index)
# Time Complexity: O(n)
# Space Complexity: O(1)

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int cnt=0;
        for(int i=0;i<nums.size();i++){

            if(i>cnt) return false;

            cnt=max(cnt,i+nums[i]);
        }
        
        
        return true;

        
    }
};
