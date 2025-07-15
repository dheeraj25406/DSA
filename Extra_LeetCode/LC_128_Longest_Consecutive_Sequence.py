# Problem: Longest Consecutive Sequence
# LeetCode: https://leetcode.com/problems/longest-consecutive-sequence/
# Approach: HashSet + check only starting points
# Time Complexity: O(n)
# Space Complexity: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }
        else if(nums.size()==1){
            return 1;
        }
        else{
        sort(nums.begin(),nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        int count=0;
        int k=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                k++;
            }
            else{
                k =0;
            }
            count=max(count,k);


        }
        return count+1;
        }
    }
};
