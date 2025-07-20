# Problem : Move Zeroes
# LeetCode : https://leetcode.com/problems/move-zeroes/
# Approach : Two Pointers
# Time Complexity : O(n)
# Space Complexity : O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }

        }   

        while(k<nums.size()){
            nums[k++]=0;
        }  
    }   
        
};
