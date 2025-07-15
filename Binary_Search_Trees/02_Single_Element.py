# Problem: Single Element in a Sorted Array
# LeetCode: https://leetcode.com/problems/single-element-in-a-sorted-array/
# Approach: Binary search using even-odd index pairing
# Time Complexity: O(log n)
# Space Complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1,mid=i+(j-i)/2;
        while(i<j){
            mid=i+(j-i)/2;
            if(mid>0 && nums[mid]==nums[mid-1]){
                if((mid%2==0))    j=mid-2;
                else    i=mid+1;
            }

            else if(mid<nums.size()-1 && nums[mid]==nums[mid+1]){
                if((mid%2==0))    i=mid+2;
                else    j=mid-1;
            }

            else    return nums[mid];
        }
        return nums[i];

    }
};
