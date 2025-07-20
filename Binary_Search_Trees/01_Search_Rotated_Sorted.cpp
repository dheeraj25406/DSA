# Problem: Search in Rotated Sorted Array
# LeetCode: https://leetcode.com/problems/search-in-rotated-sorted-array/
# Approach: Binary search with pivot check
# Time Complexity: O(log n)
# Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;

        while(i<=j){
            int mid=i+ (j-i)/2;

            if(nums[mid]==target)   return mid;
            if(nums[i]<=nums[mid])
                if(nums[i]<=target && target<nums[mid]) j=mid-1;
                else    i=mid+1;
            else
                if(nums[mid]<target && target<=nums[j]) i=mid+1;
                else    j=mid-1;

        }
        return -1;
    }
    
};
