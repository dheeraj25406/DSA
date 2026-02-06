class Solution 
{
    public:
        int minRemoval(vector<int>& nums, int k) 
        {
            int n=nums.size();
            sort(nums.begin(),nums.end());
            long long ans=INT_MAX;
            for(int l=0;l<n;l++)
            {
                long long num=1LL*k*nums[0+l];
                int r;
                auto it=upper_bound(nums.begin()+l,nums.end(),num);
                if(it==nums.begin()+l) continue;
                else it--;
                r=distance(it+1,nums.end());
                long long cur=l+r;
                if(l<=n-1-r) ans=min(ans,cur);
            }
            return ans;
        }
};