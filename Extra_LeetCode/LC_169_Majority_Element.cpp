# LC 169: Majority Element
# Link: https://leetcode.com/problems/majority-element/
# Time Complexity: O(n)
# Space Complexity: O(1) using Boyer-Moore Voting Algorithm


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1 || nums.size()==2)  return nums[0];
        if(nums.size()%2!=0)  return nums[(nums.size()-1)/2];
        else{
            int a=nums.size()/2;
            int b=a-1;
            if(nums[a]==nums[a+1])  return nums[a];
            else    return nums[b];
        }
        return -1;
    }
};
