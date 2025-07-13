# Problem : Maximum Subarray (Kadane’s Algorithm)
# LeetCode : https://leetcode.com/problems/maximum-subarray/
# Approach : Kadane’s Algorithm
# Time Complexity : O(n)
# Space Complexity : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0)   sum=0;
        }
        return maxi;
    }
};
