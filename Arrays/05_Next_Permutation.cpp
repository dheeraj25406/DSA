# Problem: Next Permutation
# LeetCode: https://leetcode.com/problems/next-permutation/
# Approach: Find pivot + swap with next greater + reverse suffix
# Time Complexity: O(n)
# Space Complexity: O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
            
        }

        if(i<0){
            reverse(nums.begin(),nums.end());
            
        }
        else{
                   
            int k=nums.size()-1;
            while(nums[k]<=nums[i]){
                k--;
            }
            swap(nums[i],nums[k]);
            reverse(nums.begin()+i+1,nums.end());
        }


       
        
    }
};
