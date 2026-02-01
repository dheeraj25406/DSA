class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        sort(nums.begin()+1,nums.end());
        if(nums.size()>1)    ans+=nums[1];
        if(nums.size()>2)    ans+=nums[2];
        return ans;
    }
};