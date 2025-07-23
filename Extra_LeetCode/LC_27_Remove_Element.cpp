// Problem: 27. Remove Element  
// Link: https://leetcode.com/problems/remove-element/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Two-pointer overwrite in-place.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
            nums.erase(nums.begin()+i);
            i--;
            }
        }
        int k=nums.size();
        return k;
        
        
    }
};
