// Problem: 2210. Count Hills and Valleys in an Array  
// Link: https://leetcode.com/problems/count-hills-and-valleys-in-an-array/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: First remove adjacent duplicates. Then for each index i, if arr[i] > both neighbors, it's a hill; if arr[i] < both neighbors, it's a valley. Count them.

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        if(nums.size()<3)   return 0;
        else if(nums.size()==3){
            int ans=0;
            if(nums[1]>nums[0] && nums[1]>nums[2])  ans =1;
            else if(nums[1]<nums[0] && nums[1]<nums[2]) ans=1;
            return ans;
        }
        int res=0;
        
        for(int i=1;i<nums.size()-1;i++){
            if (nums[i] == nums[i - 1]) continue;
            int l=i-1,r=i+1;
            while(l>=0 && nums[l]==nums[i])    l--;
            while(r<nums.size() && nums[r]==nums[i])  r++;
            if(l>=0 && r<nums.size()){
            if(nums[r]>nums[i]&& nums[i]<nums[l]){
                res++;
      

            }
            else if(nums[r]<nums[i]&& nums[i]>nums[l]){
                res++;
                
            }
            }
        }

        return res;
        
    }
};
