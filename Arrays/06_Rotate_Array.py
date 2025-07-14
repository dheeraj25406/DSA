#Problem: Rotate Array
# LeetCode: https://leetcode.com/problems/rotate-array/
# Approach: Reverse the array in parts
# Time Complexity: O(n)
# Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
            
            
        
        
    }
};
